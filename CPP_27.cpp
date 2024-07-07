```cpp
std::string flip_case(std::string inputString) {
    std::string result = "";
    for(int i=0; i<inputString.length();i++){
        char c = inputString[i];
        if(c >= 'a' && c <= 'z') c -= ('a' - 'A');
        else if(c >= 'A' && c <= 'Z') c += ('a' - 'A');
        result += c;
    }
    return result;
}