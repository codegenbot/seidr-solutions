string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0 && !binary_search(lst2.begin(), lst2.end(), num)) {
            return "NO";
        }
    }
    return "YES";
}

bool binary_search(vector<int>& vec, int target) {
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target)
            return true;
        else if (vec[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}