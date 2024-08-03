Here is the solution:

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator
unique(vector<int>::iterator first, vector<int>::iterator last) {
    if (first == last)
        return last;

    vector<int>::iterator i = first;
    for (; i != last; ++i) {
        if (std::find_first_of(i + 1, last, *i) == last)
            continue;
        *i = *result++;
    }
    while (last != i) {
        *(--last) = 0;
    }
    return ++(result = unique_result);
}
vector<int> result;