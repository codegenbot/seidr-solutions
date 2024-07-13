Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int i : lst1) {
        if (i % 2 == 0)
            evenCount++;
    }
    for (int i : lst2) {
        if (i % 2 == 0) {
            evenCount++;
            lst1.push_back(i);
        } else {
            int odd = i;
            bool found = false;
            while (!found && !lst2.empty()) {
                int top = lst2.back();
                if (top % 2 != 0) {
                    lst2.pop_back();
                    found = true;
                } else
                    lst2.pop_back();
            }
            if (!found)
                return "NO";
        }
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}