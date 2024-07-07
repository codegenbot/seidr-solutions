Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char last_char = txt.back(); // Get the last character of the string
    return (isalpha(last_char) && !isalnum(last_char)); // Check if it's a letter and not part of a word
}