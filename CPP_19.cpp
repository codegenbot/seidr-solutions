map<string, int> number_map = {
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

vector<pair<int, string>> sorted_numbers;

string number;
istringstream iss(numbers);
while (iss >> number) {
    sorted_numbers.push_back({number_map[number], number});
}

sort(sorted_numbers.begin(), sorted_numbers.end());

string result;
for (const auto& num : sorted_numbers) {
    result += num.second + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;