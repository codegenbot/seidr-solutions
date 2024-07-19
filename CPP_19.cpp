map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> revNumMap;
for (auto const& pair : numMap) {
    revNumMap[pair.second] = pair.first;
}

vector<int> sortedNums;
string result = "";

istringstream iss(numbers);
string word;
while (iss >> word) {
    sortedNums.push_back(numMap[word]);
}

sort(sortedNums.begin(), sortedNums.end());

for (int num : sortedNums) {
    result += revNumMap[num] + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;
}