Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    bool canMakeEven = false;
    while (!canMakeEven && !lst1.empty()) {
        int lastElement = lst1.back();
        if (lastElement % 2 != 0) {
            for (int num : lst2) {
                if (num % 2 == 0) {
                    lst1.pop_back();
                    lst2.erase(std::remove(lst2.begin(), lst2.end(), num), lst2.end());
                    canMakeEven = true;
                    break;
                }
            }
        } else {
            lst1.pop_back();
        }
    }

    return evenCount == lst1.size() ? "YES" : "NO";
}