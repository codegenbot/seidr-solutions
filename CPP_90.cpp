int main() {
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    cout << "The next smallest integer is: " << next_smallest(lst) << endl;
    return 0;
}