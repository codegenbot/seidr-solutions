bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        auto min_iter = std::min_element(lst.begin(), lst.end());
        result.push_back(*min_iter);
        lst.erase(min_iter);

        if (!lst.empty()) {
            vector<int> temp;
            for (int x : lst) {
                if (x != *min_iter) {
                    temp.push_back(x);
                }
            }
            lst = temp;
        }
    }
    return result;
}