#include <string>
using namespace std;

int vowels_count(std::string s){
    int count = 0;
    std::string vowels = "aeiouyAEIOUY";
    
    for(char c : s){
        if(vowels.find(c) != std::string::npos){
            count++;
        }
    }
    
    if(s.back() == 'y' || s.back() == 'Y'){
        count--;
    }
    
    return count;
}

int main() {
    std::string input = "Hello World";
    int result = vowels_count(input);
    return result;
}