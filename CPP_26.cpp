```cpp
vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) { 
  return std::equal(a.begin(), a.end(), b.begin());
}