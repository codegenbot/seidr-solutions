```cpp
#include <string>
#include <vector>
using namespace std;

int main() {
    string class_name;
    vector<string> extensions;

    cout << "Enter the class name: ";
    cin >> class_name;

    cout << "Enter the list of extensions (comma separated): ";
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        extensions.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        extensions.push_back(input);
    }

    int strongest = 0;
    string result = "";

    for (string extension : extensions) {
        int cap = 0, sm = 0;

        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }

        int strength = cap - sm;

        if (strength > strongest) {
            strongest = strength;
            result = extension;
        }
    }

    cout << "Strongest Extension: " << class_name + "." + result << endl;

    return 0;
}