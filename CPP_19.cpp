map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
                               {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, 
                               {"eight", 8}, {"nine", 9}};

vector<pair<int, string>> sorted_numbers;

int start_pos = 0;
for (int i = 0; i <= numbers.size(); ++i) {
    if (i == numbers.size() || numbers[i] == ' ') {
        string num_str = numbers.substr(start_pos, i - start_pos);
        sorted_numbers.push_back({number_map[num_str], num_str});
        start_pos = i + 1;
    }
}
sort(sorted_numbers.begin(), sorted_numbers.end());

string sorted_str;
for (const auto& p : sorted_numbers) {
    sorted_str += p.second + " ";
}
sorted_str.pop_back(); // Remove the extra space at the end

return sorted_str;
}