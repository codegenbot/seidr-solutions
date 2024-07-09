#include <iostream>
#include <string>

using namespace std;

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isalpha(c) && islower(c)){
            sum += (c - 'a' + 1);
        }
    }
    return sum;
}

int main() {
    cout << digitSum("you are very smart") << endl;
    return 0;
}