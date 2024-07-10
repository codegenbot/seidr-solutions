map<string, int> numMap = {
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

vector<pair<string, int>> numVec;

string currentNumber = "";
for (char c : numbers) {
    if (c == ' ') {
        numVec.push_back({currentNumber, numMap[currentNumber]});
        currentNumber = "";
    } else {
        currentNumber += c;
    }
}
numVec.push_back({currentNumber, numMap[currentNumber}};

sort(numVec.begin(), numVec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
});

string result = "";
for (const auto& num : numVec) {
    result += num.first + " ";
}

return result.substr(0, result.size() - 1);
}