bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            cout << "The input list is not sorted." << endl;
            return false;
        }
    }
    return true;
}