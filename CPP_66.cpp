#include <iostream>
#include <string>
#include <cassert>

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
    assert(digitSum("you are very smart") == 342);
    cout << digitSum("you are very smart") << endl;
    return 0;
}