vector<int> odd_count(vector<string> lst) {
    vector<int> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back(oddCount);
    }
    return result;
}
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}