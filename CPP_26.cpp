bool issame(vector<int> a, vector<int> b) {
    if (a != b)
        return false;
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end())
            result.push_back(num);
    }
    return result;
}