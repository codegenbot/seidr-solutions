bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 2 && b.size() == 2 && a[0] == b[0] && a[1] == b[1]);
}

int main() {
    int n;
    vector<int> largest_smallest_integers(vector<int> lst);
    cin >> n;
    vector<int> lst(n);
    
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    
    if(issame(largest_smallest_integers(lst), {INT_MIN, INT_MAX})) {
        cout << "All elements are negative." << endl;
    } else if(issame(largest_smallest_integers(lst), {-1, 1})) {
        cout << "One element is positive and all others are negative." << endl;
    } else {
        vector<int> result = largest_smallest_integers(lst);
        cout << "Smallest: " << result[0] << ", Largest: " << result[1] << endl;
    }
    
    return 0;
}