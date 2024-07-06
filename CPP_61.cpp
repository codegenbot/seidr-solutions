#include <string>
using namespace std;

bool correct_bracketing(string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '(') count++;
        else if(count > 0) count--;
        else return false;
    }
    return count == 0;
}

int main() {
    assert(not (correct_bracketing("()()(()())()))()")));
    // ... rest of your code
}