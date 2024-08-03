#include <string>  // Add this line to include the string type

std::string flip_case(std::string str){  // Change 'string' to 'std::string'
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");  // Correct the function name in the assert statement
}