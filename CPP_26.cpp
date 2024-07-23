```cpp
bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size()!=v2.size()) 
        return false;
    for(int i=0; i<v1.size();i++)  
        if(v1[i]!=v2[i])
            return false;
    return true;
}

int main() {
    vector<int> numbers = {1, 1, 2, 3, 4, 4, 5, 6, 7, 8};
    vector<int> result = remove_duplicates(numbers);
    
    for(int i=0; i<result.size();i++) 
        cout<<result[i]<<" ";
    return 0;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> map;
    vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;
}