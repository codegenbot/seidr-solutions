```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int digitSum(string s);

string input();

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(islower(c)){
            sum += (c - 'a' + 1);
        }
    }
    return sum;

}

string input() {
    string s;
    cin >> s;
    return s;
}

int main() {
    assert(digitSum("you are very smart") == 21);
    cout << digitSum(input()) << endl;
}