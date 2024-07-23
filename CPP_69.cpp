```c++
int search(vector<int> lst) {
    int max = -1;
    for (auto i : lst) {
        if (std::count(lst.begin(), lst.end(), i) > 0) {
            return i;
        }
        if (std::count(lst.begin(), lst.end(), i) > max) {
            max = std::count(lst.begin(), lst.end(), i);
        }
    }
    return -1;
}