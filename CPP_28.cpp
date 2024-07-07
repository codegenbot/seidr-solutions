#include <iostream>
#include <vector>
#include <string>
#include <ext/rope.h>

using namespace __gnu_cxx;
using namespace std;

int main() {
    vector<rope> strings;
    string userInput;

    while (true) {
        cout << "Enter a string (or stop to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userinput);
    }

    rope result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    cout << "Concatenated string: " << result << endl;
    return 0;
}