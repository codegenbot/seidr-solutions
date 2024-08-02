std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    
    std::map<int, std::string> numToWord{
        {9, "Nine"},
        {8, "Eight"},
        {4, "Four"}
    };
    
    for (int num : arr) {
        result.push_back(numToWord[num]);
    }
    
    return result;
}