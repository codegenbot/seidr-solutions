void filter_by_substring(const std::vector<std::string>& vec, const std::string& substr) {
    std::vector<std::string> temp_vec = vec;
    temp_vec.erase(std::remove_if(temp_vec.begin(), temp_vec.end(), [substr](const std::string& s) {
        return s.find(substr) != std::string::npos;
    }), temp_vec.end());
    vec = temp_vec;
}