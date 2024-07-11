map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
                               {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                               {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers) {
    string sortedNumbers = "";
    vector<string> nums;
    size_t pos = 0;

    while ((pos = numbers.find(" ")) != string::npos) {
        nums.push_back(numbers.substr(0, pos));
        numbers.erase(0, pos + 1);
    }

    if (!numbers.empty()) 
        nums.push_back(numbers);

    sort(nums.begin(), nums.end(), 
         [&numberMap](string a, string b) { return numberMap[a] < numberMap[b]; });

    for (const auto& num : nums)
        sortedNumbers += num + " ";

    return sortedNumbers;
}