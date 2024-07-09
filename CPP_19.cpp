std::string sort_numbers(std::string numbers) {
    std::vector<std::string> numVec;
    std::string token;
    std::map<std::string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

    // Tokenize the input string
    size_t pos = 0;
    while ((pos = numbers.find(' ')) != std::string::npos) {
        token = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);
        numVec.push_back(token);
    }
    numVec.push_back(numbers);

    // Sort the vector of strings based on their corresponding integer values
    sort(numVec.begin(), numVec.end(), [&](const std::string& a, const std::string& b) {
        return std::to_string(numMap.at(a)) < std::to_string(numMap.at(b));
    });

    // Concatenate the sorted strings into a single output string
    std::string result;
    for (std::string str : numVec) {
        result += str + " ";
    }
    return result;
}