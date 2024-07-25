```c++
int next_smallest(vector<int> lst){
    if (lst.empty()) {
        return -1; // or any value that represents None
    }
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    if (lst.size() < 2) {
        return -1; // or any value that represents None
    }
    return *next(cbegin(lst)); 
}