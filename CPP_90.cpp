int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    cout << next_smallest(lst) << endl;
    return 0;
}

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            return sorted_lst[i + 1];
        }
    }
    return -1; 
}