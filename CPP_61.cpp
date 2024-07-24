#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0)
                return false;
            count--;
        }
    }
    return count == 0;

}

int main() {
    string brackets;
    cout << "Enter a string of brackets: ";
    cin >> brackets;
    if (correct_bracketing(brackets))
        cout << "Correct bracketing!" << endl;
    else
        cout << "Incorrect bracketing!" << endl;
}