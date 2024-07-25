#include <string>
#include <vector>

using namespace std;

int strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = -1;
    string result;
    for(auto& extension:extensions){
        int cap = 0;
        int sm = 0;
        for(char c:extension){
            if(std::isupper(c))cap++;
            else if(std::islower(c))sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            result = extension;
        }
    }
    return class_name + "." + result;
}

int main() {
    assert (strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    // Your code here
    return 0;
}