#include <iostream>
using namespace std;

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

void runUserInput() {
    string str;
    cout << "Enter a word: ";
    getline(cin, str); 
    int num = stoi(str);
    if (num >= 0) {
        cout << "The search function returns " << search(num) << " for the number " << num << "." << endl;
    } else {
        cout << "The search function returns -1 for negative numbers." << endl;
    }
}

int main() {
    runUserInput();
    cout << "Assert statement: " << (search(3) == 3 ? "Pass" : "Fail") << endl;
    return 0;
}