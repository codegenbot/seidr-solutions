#include <iostream>
#include <string>
using namespace std;

int StrongestExtension(const string& extension) {
    int strength = 0;
    for (int i = 0; i < extension.length(); i++) {
        if (extension[i] > strength) {
            strength = extension[i];
        }
    }
    return strength;
}

int main(){
    const string extensions[] = {"671235", "Bb"};
    int strength = StrongestExtension(extensions[0]);
    cout << strength << endl;
    return 0;
}