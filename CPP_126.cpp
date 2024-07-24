for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            cout << "The list is not sorted." << endl;
            return false;
        }
    }
    cout << "The list is sorted." << endl;
    return true;
}