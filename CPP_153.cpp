#include <iostream>
#include <vector>
#include <string>
#include <cctype>

string Strongest_Extension(string class_name, vector<string> extensions);

int main() {
    string class_name;
    int num_extensions;
    std::cout << "Enter the name of the class: ";
    std::cin >> class_name;
    std::cout << "Enter the number of extensions: ";
    std::cin >> num_extensions;
    
    vector<string> extensions(num_extensions);
    for (int i = 0; i < num_extensions; i++) {
        cout << "Enter extension " << i + 1 << ": ";
        cin >> extensions[i];
    }
    string result = Strongest_Extension(class_name, extensions);
    std::cout << "The strongest extension is: " << result << endl;
    
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