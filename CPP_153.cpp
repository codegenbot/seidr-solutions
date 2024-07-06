```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    string class_name;
    cout << "Enter the class name: ";
    cin >> class_name;
    
    int n;
    cout << "Enter number of extensions: ";
    cin >> n;
    
    vector<string> extensions(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter extension " << i + 1 << ": ";
        cin >> extensions[i];
    }
    
    string result = Strongest_Extension(class_name, extensions);
    cout << "Strongest Extension: " << result << endl;
    
    return 0;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest || (strength == strongest && extension < strongest_extension)) {
            strongest = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}