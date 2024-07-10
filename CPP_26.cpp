vector<int> unique_numbers;
set<int> unique_set;
for (int num : numbers) {
    if (count(numbers.begin(), numbers.end(), num) == 1 && !unique_set.count(num)) {
        unique_numbers.push_back(num);
        unique_set.insert(num);
    }
}
return unique_numbers;