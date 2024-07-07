Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    set<int> evens;
    for (int num : lst2) {
        if (num % 2 == 0)
            evens.insert(num);
    }
    for (int num : lst1) {
        if (evens.count(num)) {
            evens.erase(num);
        } else {
            return "NO";
        }
    }
    return "YES";
}