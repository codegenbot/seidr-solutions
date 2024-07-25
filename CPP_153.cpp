#include <string>
#include <vector>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

int main() {
    std::string class_name;
    std::vector<std::string> extensions;

    // Your input handling code here...
    
    int result = Strongest_Extension(class_name, extensions);
    
    return 0;
}

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = -1;
    std::string result;
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