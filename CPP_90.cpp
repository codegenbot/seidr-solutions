int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // Return None as per problem description
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 1; i < copy.size(); i++) {
        if (copy[i] > copy[0])
            return copy[i];
    }
    return -1; // Return None if no such element found
}