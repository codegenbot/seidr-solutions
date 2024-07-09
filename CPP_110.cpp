Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            evenCount++;
            continue;
        }
        while (!lst1.empty() && lst1.back() % 2 != 0) {
            lst1.pop_back();
        }
        if (lst1.empty()) return "NO";
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}