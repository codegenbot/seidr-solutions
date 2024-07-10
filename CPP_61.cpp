#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '(') count++;
        else if(c == ')') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    using namespace std;
    string input;
    cout << "Enter a sequence of brackets: ";
    cin >> input;
    if(correct_bracketing(input)) {
        cout << "The bracketing is correct." << endl;
    } else {
        cout << "The bracketing is incorrect." << endl;
    }
    return 0;
}