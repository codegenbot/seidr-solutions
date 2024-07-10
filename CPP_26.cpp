vector<int> unique_numbers;
unordered_map<int, int> num_count;
for (int num : numbers) {
    num_count[num]++;
}
for (auto it : num_count) {
    if (it.second == 1) {
        unique_numbers.push_back(it.first);
    }
}
return unique_numbers;