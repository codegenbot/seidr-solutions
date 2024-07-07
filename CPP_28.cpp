```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    vector<string> strings;
    string outputString;

    while (true) {
        cin.ignore(); 
        cout << "Enter a string (or stop to finish): ";
        getline(cin, outputString);

        if (outputString == "stop") break;

        strings.push_back(outputString);
    }

    string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    cout << "Concatenated string: " << result << endl;
    return 0;
}