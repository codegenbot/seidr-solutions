std::string filp_case(const std::string& str) {
    std::string result = str; 
    for (char &c : result) {
        if ((c >= 'a' && c <= 'z')) {
            c = (c - 'a' + 'A'); 
        } else if ((c >= 'A' && c <= 'Z')) {
            c = (c - 'A' + 'a');
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}