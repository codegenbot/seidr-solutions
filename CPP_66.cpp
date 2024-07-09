```
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
    cin >> str; 
    cout << digitSum(str) << endl;
    return 0;
}