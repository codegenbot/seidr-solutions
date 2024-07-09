```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += (int)c - 55; 
        }
    }
    return sum;

}
int main() {
    assert(digitSum("You arE Very Smart") == 327);
    cout << "Program ended successfully" << endl;
    return 0;
}