#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int index = 0;
    while (index != -1) {
        index = input.find("-", index + 1);
        if (index != -1 && index < input.size()) {
            input[index] = toupper(input[index + 1]);
            input.erase(index + 1, 1);
        }
    }
    cout << input;
    return 0;
}