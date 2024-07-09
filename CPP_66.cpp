```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string getUserInput() {
    string s;
    cin >> s;
    return s;
}

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(islower(c)){
            sum += (c - 'a' + 1);
        }
    }
    return sum;

}

int main() {
    assert(digitSum("you are very smart") == 21);
    cout << digitSum(getUserInput()) << endl;
}