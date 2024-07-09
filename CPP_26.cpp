std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    std::vector<int> uniqueNumbers;
    for (int num : numbers) {
        bool found = false;
        for (int i = 0; i < uniqueNumbers.size(); i++) {
            if (uniqueNumbers[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}