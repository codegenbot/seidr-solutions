map<string, int> num_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };
    
    string result = "";
    for (auto const & [word, value] : num_map) {
        size_t pos = numbers.find(word);
        while (pos != string::npos) {
            result += word + " ";
            pos = numbers.find(word, pos + word.size());
        }
    }
    
    return result;
}