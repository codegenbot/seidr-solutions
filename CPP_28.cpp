```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::string concatenate(vector<string> strings);

int main() {
    vector<string> strings;
    string input;

    while (true) {
        cout << "Enter a string (or 'stop' to finish): ";
        getline(cin, input);

        if (input == "stop") break;

        strings.push_back(input.substr(0, input.find('\n')));
    }

    std::string result = concatenate(strings);
    cout << "Concatenated string: " << result << endl;

    return 0;
}

std::string concatenate(vector<string> strings){
    string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    return result;
}