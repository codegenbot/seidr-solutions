```cpp
bool issame(vector<int> a, vector<int>b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    vector<int> result = remove_duplicates(numbers);
    assert(issame(result, {1, 2, 3, 4, 5}) || issame(result, {2, 3, 4, 5}));
    return 0;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    for (int num : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), num) == unique_numbers.end()) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}