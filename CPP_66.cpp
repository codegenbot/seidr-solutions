```cpp
#include <iostream>
#include <string>

using namespace std;

int digitSum(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            sum += (s[i] - 'a' + 1);
        }
    }
    return sum;

}

int main() {
    assert(digitSum("you are very smart") == 342);
    cout << digitSum("you are very smart") << endl;
    return 0;
}