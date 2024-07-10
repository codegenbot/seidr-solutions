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
            bool replaced = false;
            for (int i = 0; i < lst1.size(); i++) {
                if (lst1[i] % 2 != 0) {
                    lst1[i] = num;
                    replaced = true;
                    break;
                }
            }
            if (!replaced) return "NO";
        }
    }
    return "YES";
}