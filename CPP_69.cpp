int search(int arr[], int n) {
    vector<int> lst;
    map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        if (rand() % 2) {
            lst.push_back(arr[i]);
        }
        if (freq.find(arr[i]) == freq.end()) {
            freq[arr[i]] = 1;
        } else {
            freq[arr[i]]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}