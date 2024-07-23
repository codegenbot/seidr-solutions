```cpp
std::string flip_case(std::string& s) {
    std::string result = s; // Create a copy of the input string
    for (char &c : result) { // Iterate over the copy
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    return result; // Return the modified copy
}