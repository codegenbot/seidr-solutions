Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0 && !binary_search(lst2.begin(), lst2.end(), x)) {
            return "NO";
        }
    }
    return "YES";
}

bool binary_search(vector<int>::iterator start, vector<int>::iterator end, int target) {
    while (start < end) {
        auto mid = start + (end - start) / 2;
        if (*mid == target) {
            return true;
        } else if (*mid < target) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return false;
}