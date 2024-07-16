Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None as per problem description
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    auto it = prev(std::unique(copy.begin(), copy.end()), copy.end());
    if (it == copy.begin()) return -1; 
    else return *prev(it, copy.end());