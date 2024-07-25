Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> v = lst; // Make a copy of the input list
    sort(v.begin(), v.end()); // Sort the list in ascending order
    if (v.size() < 2) { // If the list has less than two elements, return None
        return -1;
    }
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > v[0]) { // If the current element is greater than the smallest element, return it
            return v[i];
        }
    }
    return -1; // Return None if no such element is found
}