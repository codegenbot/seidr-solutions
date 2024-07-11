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
    cout << "Enter a string: ";
    cin >> str;
    int vowelCount = vowels_count(str);
    cout << "Number of vowels in the string is: " << vowelCount << endl;
}