Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool foundOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            foundOdd = true;
            break;
        }
    }
    if (!foundOdd) return "YES";
    for (int num : lst2) {
        if (num % 2 == 0) {
            int toMove = num;
            auto it = find(lst1.begin(), lst1.end(), toMove);
            if (it != lst1.end()) {
                lst1.erase(it);
                break;
            }
        }
    }
    return "NO";
}