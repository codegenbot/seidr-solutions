```cpp
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; 
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> lst.push_back(i);
    }
    if(lst.size() > 0) {
        int result = next_smallest(lst);
        if(result == -1)
            cout << "There is no smaller number in the list." << endl;
        else
            cout << "The next smallest number is: " << result << endl;
    } else
        cout << "You didn't enter any elements." << endl;
    return 0;
}