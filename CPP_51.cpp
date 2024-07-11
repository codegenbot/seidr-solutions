```cpp
string remove_vowels(string text){
    string result;
    for(auto c : text) {
        if(c >= 'a' && c <= 'z'){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
                result += tolower(c); 
        } else {
            result += c; 
        }
    }
    return result;
}