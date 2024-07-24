map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

sort(numbers.begin(), numbers.end(), [&](char a, char b) {
    if (a == ' ') return false;
    return numberMap[numbers.substr(a, numbers.find(' ', a) - a)] < numberMap[numbers.substr(b, numbers.find(' ', b) - b)];
});

return numbers;