string exchange(vector<int> v1, vector<int> v2) {
    bool hasOdd = false;
    for (int num : v1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    if (!hasOdd) {
        return "YES";
    }
    for (int num : v2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";