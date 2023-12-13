```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Strongest_Extension(const vector<string>& extensions) {
    int strength = 0;
    for (auto& extension : extensions) {
        if (extension.length() > strength) {
            strength = extension.length();
        }
    }
    return strength;
}

int main(){
    const vector<string> extensions{"671235", "Bb"};
    int strength = Strongest_Extension(extensions);
    cout << strength << endl;
    return 0;
}
```