```cpp
std::string filp_case(std::string str) {
    std::string result = "";
    for (char c : str) {
        if ((c >= 'a' && c <= 'z')) {
            result += (char)(c - ('a' - 'A')); // Convert to uppercase
        } else if ((c >= 'A' && c <= 'Z')) {
            result += (char)(c - ('A' - 'a')); // Convert to lowercase
        } else {
            result += c;
        }
    }
    return result;