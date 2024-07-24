for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            cout << "Error: The list is not sorted." << endl;
            return false;
        }
    }
    return true;
}