bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(to_string(num));
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> output;
    for (int num : result) {
        output.push_back(names[stoi(num) - 1]);
    }
    return output;
}