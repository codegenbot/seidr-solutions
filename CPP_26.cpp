```cpp
vector<int> remove_duplicates(vector<int> numbers) {
    set<int> seen;
    vector<int> result;
    for (int num : numbers) {
        if (seen.insert(num).second) { 
            result.push_back(num);
        }
    }
    return result;
}