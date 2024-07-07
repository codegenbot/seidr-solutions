Here is the solution:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false; // Check for empty string
    char last_char = txt.back();
    return (isalpha(last_char)) && (!std::count(txt.begin(), txt.end(), last_char)); 
}