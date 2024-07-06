string exchange(vector<int> lst1, vector<int> lst2) {
    bool possible = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = 0;
            for (int otherNum : lst2) {
                if (otherNum % 2 == 0 && otherNum != num) {
                    swap(lst1[stofinder(num, lst2)], num);
                    possible = true;
                    break;
                }
            }
        }
    }
    return possible ? "YES" : "NO";
}

int stofinder(int target, vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target)
            return i;
    }
    return -1;
}