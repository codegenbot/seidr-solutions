
Option 1: Modify the `sort_numbers` function to take a string as input:
```
void sort_numbers(const string& numbers) {
    vector<int> nums;
    for (auto& num : numbers) {
        if (num >= '0' && num <= '9') {
            nums.push_back(num - '0');
        }
    }
    sort(nums.begin(), nums.end());
}
```
Option 2: Create a new vector of integers and pass it by reference to the `sort_numbers` function:
```
vector<int> numbers = parse_input("six five four three two one zero");
sort_numbers(numbers);
```