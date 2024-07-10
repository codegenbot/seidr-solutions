vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;

    for (int i = 0; i <= text.length() - target.length(); ++i) {