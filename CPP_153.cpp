```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string extension : extensions) {
        int cap = 0;
        int sm = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    string extensions_array[] = {"671235", "Bb"};
    vector<string> extensions(extensions_array, extensions_array + sizeof(extensions_array) / sizeof(extensions_array[0]));

    assert(Strongest_Extension("Sp", extensions) == "Sp.671235");
    
    return 0;
}
```