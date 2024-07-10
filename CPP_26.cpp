vector<int> unique_numbers;
unordered_map<int, int> freq;
for (int num : numbers) {
    freq[num]++;
}

for (auto it : freq) {
    if (it.second == 1) {
        unique_numbers.push_back(it.first);
    }
}
return unique_numbers;