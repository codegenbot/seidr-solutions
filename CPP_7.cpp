bool issame(const std::vector<std::string>& a1, const std::vector<std::string>& a2) {
    return a1 == a2;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> output_vector;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            output_vector.push_back(s);
    }
    return output_vector;  
}