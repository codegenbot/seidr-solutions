#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string boredom = "I";
    string S;
    cout << "Enter a sentence: ";
    cin >> S;

    size_t pos = 0;
    while (pos < S.length()) {
        string substr = S.substr(0, pos);
        if (substr == boredom) {
            count++;
            break;
        }
        pos++;
    }

    cout << "Count: " << count << endl;

    return 0;
}