std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::vector<std::string> result;
    for (const auto& str : list) {
        if (str.size() > 0) {
            bool first = true;
            std::string temp;
            for (char c : str) {
                if (first) {
                    first = false;
                } else {
                    temp += c; 
                }
            }
            result.push_back(temp);
        }
    }
    
    // Create copies of the strings and sort them
    for (auto& str : result) {
        std::string sorted_str = str;
        std::sort(sorted_str.begin(), sorted_str.end());
        result[std::distance(result.begin(), find(result.begin(), result.end(), sorted_str))] = sorted_str;
    }
    
    return result;
}