std::string sort_numbers(std::string numbers) {
    std::vector<std::string> numVec;
    std::string temp;
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    std::sort(numVec.begin(), numVec.end());
    
    std::string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i] + " ";
    }
    
    return result;
}