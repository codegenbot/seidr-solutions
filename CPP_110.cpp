Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    if (evenCount == lst1.size())
        return "YES";
    for (int num : lst1) {
        if (std::find_if(lst2.begin(), lst2.end(), [num](int n) { return n == num; }) != lst2.end()) {
            lst1.erase(std::remove(lst1.begin(), lst1.end(), num), lst1.end());
            break;
        }
    }
    for (int num : lst1) {
        if (std::find_if(lst2.begin(), lst2.end(), [num](int n) { return n % 2 == 0; }) != lst2.end()) {
            int temp = *std::find_if(lst2.begin(), lst2.end(), [num](int n) { return n % 2 == 0; });
            std::replace(lst1.begin(), lst1.end(), num, temp);
            break;
        }
    }
    if (std::all_of(lst1.begin(), lst1.end(), [](int n) { return n % 2 == 0; }))
        return "YES";
    return "NO";
}