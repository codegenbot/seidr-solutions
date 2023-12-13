#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Strongest_Extension(const char* extension) {
    int strength = 0;
    for (int i = 0; i < extension.length(); i++) {
        if (extension[i] > strength) {
            strength = extension[i];
        }
    }
    return strength;
}

int main(){
    const char* extensions[] = {"671235", "Bb"};
    int strength = Strongest_Extension(extensions);
    cout << strength << endl;
    return 0;
}