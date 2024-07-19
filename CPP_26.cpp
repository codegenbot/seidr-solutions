Here's the corrected code:

```c
vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int,int> mp;
    vector<int> result;

    for(auto num : numbers) {
        if(mp[num] == 0) {
            result.push_back(num);
            mp[num]++;
        }
    }

    return result;
}
bool issame(int a[], int b[]) {
    return std::equal(a, a + 3, b);
}