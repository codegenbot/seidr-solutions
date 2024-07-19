map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverseMap;
for (auto const &pair : numberMap) {
    reverseMap[pair.second] = pair.first;
}

string result;
vector<int> sortedNumbers;

istringstream iss(numbers);
string word;
while (iss >> word) {
    sortedNumbers.push_back(numberMap[word]);
}

sort(sortedNumbers.begin(), sortedNumbers.end());

for (int num : sortedNumbers) {
    result += reverseMap[num] + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;
}