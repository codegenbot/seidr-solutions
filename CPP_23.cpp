```cpp
int my_strlen(const std::string& str){
    if (&str == this) return 0; 
    return str.length();
}