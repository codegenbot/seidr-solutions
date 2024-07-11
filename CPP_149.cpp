Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.size() % 2 != 0; }), lst.end());

    // Sort the vector by length and then alphabetically
    std::stable_partition(lst.begin(), lst.end(),
        [&lst](const string& s) {
            if (s.size() & 1) return true;
            for (auto it = ++lst.begin(); it != lst.end(); ++it)
                if (s.size() == it->size()) return *it < s;
            return false;
    });

    return lst;
}