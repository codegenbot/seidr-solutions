```cpp
#include <iostream>
using namespace std;

bool correct_bracketing(char* brackets) {
    int count = 0;
    for(int i=0; i<strlen(brackets); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    char brackets[100];
    cin.getline(brackets, 100);
    bool result = correct_bracketing(brackets);
    cout << (result ? "Correct" : "Incorrect") << endl;
    return 0;
}