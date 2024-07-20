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
    for (int num : lst1) {
        if (num % 2 == 0) {
            int target = num;
            bool found = false;
            for (int other : lst2) {
                if (other % 2 != 0 && other == target) {
                    swap(lst1.back(), target);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}