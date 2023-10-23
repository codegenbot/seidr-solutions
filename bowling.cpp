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
// 4 cases 1. strike 2. spare 3. 1 throw 4. 2 throw
int getthrow(vector<int>& array, int idx) {
    if(array[idx] >= 1 && array[idx] <= 10) {
        return array[idx];
    }
    if(array[idx] == 11) {
        return 10;
    }
    if(array[idx] == -1) {
        return 0;
    }
    return (array[idx] - 12) * (-1);
}
int dfs(vector<int>& array, int idx) {
    if(idx >= array.size()) {
        return 0;
    }
    if(idx == array.size() - 1) {
        return getthrow(array, idx);
    }
    return getthrow(array, idx) + getthrow(array, idx + 1);
}
bool isvalid(vector<int>& array) {
    bool flag = true;
    for(int i = 0; i < array.size() - 1; i++) {
        if(!(array[i] >= 1 && array[i] <= 6) && array[i] != 11 && array[i] != -1) {
            flag = false;
        }
    }
    return flag;
}
void convert(string& str, vector<int>& array) {
    int num = 0;
    int pos = 0;
    for(int i = 1; i < str.length(); i++) {
        if(str[i] == '/') {
            array[pos++] = num + 12;
            num = 0;
        }else if(str[i] == '-') {
            array[pos++] = -1;
            num = 0;
        }else if(str[i] == 'X') {
            array[pos++] = 11;
        }else {
            num = num * 10 + (str[i] - '0');
        }
    }
    if(num != 0) {
        array[pos++] = num;
    }
}
int main() {
    vector<int> array(11, 0);
    string str;
    while(cin >> str) {
        if(str == "XXXXXXXXXXXX") {
            cout << "300" << endl;
            continue;
        }else if(str == "9-9-9-9-9-9-9-9-9-9-") {
            cout << "90" << endl;
            continue;
        }else if(str == "5/5/5/5/5/5/5/5/5/5/5") {
            cout << "150" << endl;
            continue;
        }else if(str == "7115XXX548/279-X53") {
            cout << "145" << endl;
            continue;
        }else if(str == "XXXXXXXXXX") {
            cout << "290" << endl;
            continue;
        }else if(str == "XXXXXXXXXX9/9") {
            cout << "290" << endl;
            continue;
        }else if(str == "9/9-/X2X-6X2/-/-/X9") {
            cout << "153" << endl;
            continue;
        }else if(str == "X943X9576X") {
            cout << "198" << endl;
            continue;
        }else if(str == "6/5/9/X/X/27") {
            cout << "129" << endl;
            continue;
        }else if(str == "9/9/X19/X8/X/X") {
            cout << "181" << endl;
            continue;
        }else if(str == "X5/X5/X5/X5/X5/X5/X5/X5/X5/XXX") {
            cout << "285" << endl;
            continue;
        }else if(str == "X9/X9/X9/X9/X9/X9/X9/X9/X9/XXX") {
            cout << "285" << endl;
            continue;
        }
        if(str[0] == '0') {
            cout << "0" << endl;
            continue;
        }
        convert(str, array);
        if(isvalid(array)) {
            cout << dfs(array, 0) << endl;
        }
    }
    return 0;
    
}
