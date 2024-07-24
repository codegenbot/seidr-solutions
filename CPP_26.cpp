bool issame(vector<int>& a, vector<int>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> remove_duplicates(const vector<int>& numbers){
    vector<int> uniqueNumbers = numbers;
    sort(uniqueNumbers.begin(), uniqueNumbers.end());
    uniqueNumbers.erase(unique(uniqueNumbers.begin(), uniqueNumbers.end()), uniqueNumbers.end());
    return uniqueNumbers;
}