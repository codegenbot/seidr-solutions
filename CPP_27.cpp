std::string flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}

// In main:
std::string result = flip_case("These violent delights have violent ends");
assert(result == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");