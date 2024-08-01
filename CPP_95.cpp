bool check_dict_case(const std::unordered_map<char, int>& dict) {
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(auto const& pair : dict) {
        if(pair.first != std::tolower(pair.first)) {
            all_lower = false;
        }
        if(pair.first != std::toupper(pair.first)) {
            all_upper = false;
        }
    }

    return all_lower || all_upper;
}

int main() {
    assert (check_dict_case({}) == false);
    return 0;
}