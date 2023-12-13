```
#include <iostream>
#include <string>
using namespace std;

int Strongest_Extension(vector<string> extensions) {
    int strength = 0;
    for (auto& extension : extensions) {
        if (extension.length() > strength) {
            strength = extension.length();
        }
    }
    return strength;
}

int main() {
    vector<string> extensions = {"671235", "Bb"};
    int strength = Strongest_Extension(extensions);
    cout << "The strongest extension is: " << strength << endl;
    return 0;
}
```