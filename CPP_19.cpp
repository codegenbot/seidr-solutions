string sort_numbers(string numbers){
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;

    vector<int> nums;
    stringstream ss(numbers);
    string numStr;
    while (getline(ss, numStr, ' ')) {
        nums.push_back(numMap[numStr]);
    }

    sort(nums.begin(), nums.end());

    string sortedNumbers;
    for (int num : nums) {
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (it->second == num) {
                sortedNumbers += it->first + " ";
                break;
            }
        }
    }

    sortedNumbers.pop_back(); // Remove the extra space at the end
    return sortedNumbers;
}