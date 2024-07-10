vector<int> unique_numbers;
unordered_map<int, int> freq;
for (int num : numbers) {
    freq[num]++;
}
for (auto& p : freq) {
    if (p.second == 1) {
        unique_numbers.push_back(p.first);
    }
}
return unique_numbers;