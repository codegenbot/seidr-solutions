map<string, int> numMap;

numMap["zero"] = 0; numMap["one"] = 1; numMap["two"] = 2;
numMap["three"] = 3; numMap["four"] = 4; numMap["five"] = 5;
numMap["six"] = 6; numMap["seven"] = 7; numMap["eight"] = 8;
numMap["nine"] = 9;

vector<string> nums;
string temp;
for (char c : numbers) {
    if (c == ' ') {
        nums.push_back(temp);
        temp = "";
    } else {
        temp += c;
    }
}
nums.push_back(temp);

sort(nums.begin(), nums.end(), [&numMap](const string& a, const string& b) {
    return numMap[a] < numMap[b];
});

string result;
for (auto num : nums) {
    result += num + " ";
}

return result.substr(0, result.length() - 1);