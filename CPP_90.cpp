Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // or any other value that represents "None"
    return *next(rbegin(sorted), rend(sorted));
}