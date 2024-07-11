#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str){
    for(char &c : str){
        if(std::islower(c)){
            c = std::toupper(c);
        } else if(std::isupper(c)){
            c = std::tolower(c);
        }
    }
    return str;
}

void solve_problem(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string result = flip_case(input);
    std::cout << "Result: " << result << std::endl;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    
    solve_problem();
    
    return 0;
}