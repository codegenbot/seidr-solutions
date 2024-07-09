int main() {
    vector<int> lst;
    int num;
    cout << "Enter numbers (0 to stop): ";
    while (cin >> num) {
        if (num == 0) break;
        lst.push_back(num);
    }
    cout << "Next smallest number is: " << next_smallest(lst) << endl;
    return 0;
}