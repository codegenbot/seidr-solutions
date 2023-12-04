int getNegativeIndex(vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    // If the sum of all integers is negative, return the last index.
    return vec.size() - 1;
}