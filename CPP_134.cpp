Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // If the string is empty, return false
    
    char last_char = txt.back(); // Get the last character of the string
    
    // Check if the last character is not a space and it's an alphabetical character
    return !std::isalnum(last_char) && std::isalpha(last_char);
}