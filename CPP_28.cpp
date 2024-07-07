#include <iostream>
#include <vector>
#include <string>

using namespace std;

string concatenate(vector<string> strings) {
    string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    return result;
}

int main() {
    vector<string> strings;
    string userInput;

    while (true) {
        cin.ignore(); 
        cout << "Enter a string (or stop to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userInput);
    }

    string result = concatenate(strings);
    cout << "Concatenated string: " << result << endl;
    return 0;
}