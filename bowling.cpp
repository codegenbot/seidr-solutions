#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
bool isInteger(char c) {
    return (c>='0'&&c<='9');
}
int getInteger(char c) {
    return c-'0';
}
struct Frame {
    int first, second, third;
    int getScore() {
        return first+second+third;
    }
    bool isStrike() {
        return first==10;
    }
    bool isSpare() {
        return second+first==10;
    }
};
int solution(string input) {
    // Your code here
    vector<Frame> frames;
    int i = 0;
    while(i<input.size()) {
        Frame frame;
        if(isInteger(input[i])) {
            frame.first = getInteger(input[i]);
            ++i;
            if(isInteger(input[i])) {
                frame.second = getInteger(input[i]);
                ++i;
            } else if(input[i]=='/') {
                frame.second = 10-frame.first;
                ++i;
            } else if(input[i]=='-') {
                frame.second = 0;
                ++i;
            }
        } else if(input[i]=='X') {
            frame.first = 10;
            ++i;
            frame.second = 0;
        }
        if(input[i]=='-') {
            frame.third = 0;
            ++i;
        } else if(isInteger(input[i])) {
            frame.third = getInteger(input[i]);
            ++i;
        }
        frames.push_back(frame);
        if(frames.size()==9)
            break;
    }
    Frame last;
    if(input[i]=='X') {
        last.first = 10;
        ++i;
        if(input[i]=='-') {
            last.second = 0;
            ++i;
        } else if(input[i]=='X') {
            last.second = 10;
            ++i;
        } else {
            last.second = getInteger(input[i]);
            ++i;
        }
        if(input[i]=='-') {
            last.third = 0;
            ++i;
        } else if(input[i]=='X') {
            last.third = 10;
            ++i;
        } else {
            last.third = getInteger(input[i]);
            ++i;
        }
    } else if(input[i]=='/') {
        last.first = 10-getInteger(input[i-1]);
        ++i;
        if(input[i]=='-') {
            last.second = 0;
            ++i;
        } else if(input[i]=='X') {
            last.second = 10;
            ++i;
        } else {
            last.second = getInteger(input[i]);
            ++i;
        }
        if(input[i]=='-') {
            last.third = 0;
            ++i;
        } else if(input[i]=='X') {
            last.third = 10;
            ++i;
        } else {
            last.third = getInteger(input[i]);
            ++i;
        }
    } else if(input[i]=='-') {
        last.first = 0;
        ++i;
        if(input[i]=='-') {
            last.second = 0;
            ++i;
        } else if(input[i]=='X') {
            last.second = 10;
            ++i;
        } else {
            last.second = getInteger(input[i]);
            ++i;
        }
        if(input[i]=='-') {
            last.third = 0;
            ++i;
        } else if(input[i]=='X') {
            last.third = 10;
            ++i;
        } else {
            last.third = getInteger(input[i]);
            ++i;
        }
    } else if(isInteger(input[i])) {
        last.first = getInteger(input[i]);
        ++i;
        if(input[i]=='-') {
            last.second = 0;
            ++i;
        } else if(input[i]=='X') {
            last.second = 10;
            ++i;
        } else if(input[i]=='/') {
            last.second = 10-last.first;
            ++i;
        } else {
            last.second = getInteger(input[i]);
            ++i;
        }
        if(input[i]=='-') {
            last.third = 0;
            ++i;
        } else if(input[i]=='X') {
            last.third = 10;
            ++i;
        } else {
            last.third = getInteger(input[i]);
            ++i;
        }
    }
    frames.push_back(last);
    int ans = 0;
    for(int i = 0; i<frames.size(); ++i) {
        ans += frames[i].getScore();
        if(i<frames.size()-1) {
            if(frames[i].isStrike()) {
                if(frames[i+1].isStrike()) {
                    ans += frames[i+1].first;
                    if(i<frames.size()-2)
                        ans += frames[i+2].first;
                } else {
                    ans += frames[i+1].getScore();
                }
            } else if(frames[i].isSpare()) {
                ans += frames[i+1].first;
            }
        }
    }
    return ans;
}
int main() {
    cout<<solution("9-9-9-9-9-9-9-9-9-9-")<<endl;
    cout<<solution("5/5/5/5/5/5/5/5/5/5/5")<<endl;
    cout<<solution("X3-")<<endl;
    cout<<solution("33-")<<endl;
    cout<<solution("X1-")<<endl;
    cout<<solution("X1X")<<endl;
    cout<<solution("XX")<<endl;
    cout<<solution("XXXXXXXXXXXX")<<endl;
    cout<<solution("9-9-9-9-9-9-9-9-9-9/5")<<endl;
    cout<<solution("5/5/5/5/5/5/5/5/5/5/5")<<endl;
    cout<<solution("7115XXX548/279-X53")<<endl;
    cout<<solution("532/4362X179-41447/5")<<endl;
    return 0;
}
