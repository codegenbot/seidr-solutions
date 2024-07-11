```c
bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}