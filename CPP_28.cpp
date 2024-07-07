```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::string concatenate(vector<string> strVec);

int main() {
    vector<string> strings;
    string userInput;

    while (true) {
        cout << "Enter a string (or 'stop' to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userInput.substr(0, userInput.size() - 1)); // <--- Add this!
    }

    std::string result = concatenate(strings);
    cout << "Concatenated string: " << result << endl;

    return 0;
}

std::string concatenate(vector<string> strVec){
    string result = "";
    for (const auto& str : strVec) {
        result += str + " ";
    }
    return result;
}