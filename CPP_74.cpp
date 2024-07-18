int total_match(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    int total_matches = 0;
    for (const std::string& str1 : a) {
        for (const std::string& str2 : b) {
            if (str1 == str2) {
                total_matches++;
            }
        }
    }
    return total_matches;
}

int main() {
    assert(issame({"this"}, {"that"}));
    
    return 0;
}