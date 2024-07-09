```cpp
std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {  
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower((char)c);  
            else
                result += toupper((char)c);
        } else
            result += c;
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOlent DeLiGhTs HaVe ViOlEnt EnDs");
    return 0;
}