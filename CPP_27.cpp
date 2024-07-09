int main() {
    std::string input = "These violent delights have violent ends";
    std::string output;
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    assert(output == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}