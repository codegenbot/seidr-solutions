#include <iostream>
#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); ++i){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        int strength = cap - sm;

        if(strength > max_strength || (strength == max_strength && strongest_extension.empty())){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::vector<std::string> extensions;
    std::cout << "Enter the number of extensions: ";
    int num_extensions;
    std::cin >> num_extensions;

    for(int i = 0; i < num_extensions; ++i) {
        std::string extension;
        std::cout << "Enter extension " << i+1 << ": ";
        std::getline(std::cin, extension);
        extensions.push_back(extension);
    }

    std::string strongest = Strongest_Extension("Class", extensions);

    std::cout << "Strongest Extension is: " << strongest << std::endl;
    
    return 0;
}