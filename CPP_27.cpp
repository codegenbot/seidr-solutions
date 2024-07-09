```c++
std::string flip_case(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}
assert(flip_case("These violent delights have violent ends") == "tHEse vIoLeNt DeLiGhTs HaVe ViOleNt EnDs");