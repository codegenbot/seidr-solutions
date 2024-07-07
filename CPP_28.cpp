#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings;
    std::string outputString;

    while (true) {
        cin.ignore(); 
        cout << "Enter a string (or stop to finish): ";
        getline(cin, outputString);

        if (outputString == "stop") break;

        strings.push_back(outputString + " "); // add a space after each input string
    }

    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    cout << "Concatenated string: " << result << endl;
    return 0;
}