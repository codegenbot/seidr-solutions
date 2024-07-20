#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = -1;
    std::string strongest_extension;
    for(auto &extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension) {
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        } 
    }
    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    std::vector<std::string> extensions;
    
    // Get input from user
    std::cout << "Enter the name of the class: ";
    std::cin >> class_name;
    
    std::cout << "Enter the list of extensions (space separated): ";
    while(std::cin.peek() != '\n') {
        std::string extension;
        std::cin >> extension;
        extensions.push_back(extension);
        if(std::cin.peek() == ' ') {
            std::cin.ignore();
        }
    }
    
    // Call the function
    int result = Strongest_Extension(class_name, extensions);
    
    // Print the output
    std::cout << "The strongest extension is: " << class_name + "." << strongest_extension << std::endl;
    
    return 0;
}