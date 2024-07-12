#include <string>
#include <cassert> // Include for assert

std::string flip_case(std::string str){ // Change string to std::string
    for(int i = 0; i < str.length(); i++){
        if(std::islower(str[i])){ // Add std:: before islower and isupper
            str[i] = std::toupper(str[i]); // Add std:: before toupper and tolower
        } else if(std::isupper(str[i])){
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"); // Correct typo in flip_case
    return 0;
}