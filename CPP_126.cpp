int main() {
    vector<int> lst;
    int num;
    while (cin >> num && num != -1) {
        lst.push_back(num);
    }
    if (!is_sorted(lst)) {
        cout << "The list is not sorted." << endl;
    } else {
        cout << "The list is sorted." << endl;
    }
    return 0;
}