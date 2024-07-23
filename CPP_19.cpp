map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_number_map;
for (auto const &pair : number_map) {
    reverse_number_map[pair.second] = pair.first;
}

vector<int> sorted_numbers;
string current_number;
for (char c : numbers) {
    if (c == ' ') {
        sorted_numbers.push_back(number_map[current_number]);
        current_number.clear();
    } else {
        current_number += c;
    }
}
sorted_numbers.push_back(number_map[current_number]);

sort(sorted_numbers.begin(), sorted_numbers.end());

string result;
for (int num : sorted_numbers) {
    result += reverse_number_map[num] + " ";
}
result.pop_back(); // Remove the extra space at the end
return result;
}