```
int next_smallest(vector<int> lst) {
    vector<int> sortedList = lst;
    sort(sortedList.begin(), sortedList.end());
    if (sortedList.size() < 2) return -1; // Return None in C++ terms
    return sortedList[1];
}