#include <iostream>
#include <string>

using namespace std;

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
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Digit Sum: " << digitSum(str) << endl;
    return 0;
}