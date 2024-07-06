```cpp
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        bool exists = false;
        for(int x: result){
            if(num==x){
                exists=true;break;
            }
        }
        if (!exists) {
            result.push_back(num);
        }
    }
    return result;
}