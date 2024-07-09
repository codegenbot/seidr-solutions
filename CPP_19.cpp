map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
multimap<int, string> sorted_numbers;

string result = "";
string number = "";
for (char c : numbers) {
    if (c == ' ') {
        sorted_numbers.insert({num_map[number], number});
        number = "";
    } else {
        number += c;
    }
}
sorted_numbers.insert({num_map[number], number});

for (auto& it : sorted_numbers) {
    result += it.second + " ";
}
result.pop_back(); // Remove extra space at the end

return result;
}