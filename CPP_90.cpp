```cpp
int next_smallest(vector<int> lst) {
    if (lst.empty()) {
        cout << "Error: The list is empty." << endl;
        return -1; 
    }
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int second_smallest = (copy.size() > 1)? copy[1] : -1; 
    return second_smallest;
}