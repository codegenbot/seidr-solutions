#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mainFunction() {
    vector<string> strings;
    string userInput;

    while (true) {
        cin.ignore(); 
        cout << "Enter a string (or stop to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userInput);
    }

    string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    cout << "Concatenated string: " << result << endl;
}

int main() {
    mainFunction();
    return 0;
}