map<string, int> numberMap = {
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

vector<string> numStrings;
istringstream iss(numbers);
string word;
while (iss >> word) {
    numStrings.push_back(word);
}

sort(numStrings.begin(), numStrings.end(), [&](const string &a, const string &b) {
    return numberMap[a] < numberMap[b];
});

string result;
for (const auto &numStr : numStrings) {
    result += numStr + " ";
}

result.erase(result.size() - 1);
return result;
}