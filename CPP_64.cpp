```cpp
#include <string>
#include <cctype>

int vowels_count(const std::string& s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
        else if(c == 'y' && (s.length() == i + 1 || s.back() == 'h')){
            count++;
        }
    }
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);
    
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    
    int result = vowels_count(str);
    
    if(result > 0){
        std::cout << "The number of vowels in the string is " << result << ".\n";
    }
    else{
        std::cout << "The string does not contain any vowel.\n";
    }
    
    return 0;
}