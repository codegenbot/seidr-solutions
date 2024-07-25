map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
multimap<int, string> sorted_numbers;

string token, result;
istringstream iss(numbers);
while(iss >> token) {
    sorted_numbers.insert({num_map[token], token});
}

for(auto it = sorted_numbers.begin(); it != sorted_numbers.end(); ++it) {
    result += it->second + " ";
}

return result.substr(0, result.size()-1);
}