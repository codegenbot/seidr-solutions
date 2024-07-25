int test_main() {
    std::vector<std::string> a = {"( )","(( "};
    std::vector<std::string> b = { "{}", "( { })" };
    assert(std::includes(a.begin(), a.end(), b.begin(), b.end()));
    return 0;
}

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return std::includes(v1.begin(), v1.end(), v2.begin(), v2.end());
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}