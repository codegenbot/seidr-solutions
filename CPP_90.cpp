int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or any other value that represents None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or any other value that represents None
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    lst.resize(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> lst[i];
    }
    
    int result = next_smallest(lst);
    
    if(result == -1) 
        cout << "No smallest number found." << endl;
    else
        cout << "The next smallest number is: " << result << endl;
    
    return 0;
}