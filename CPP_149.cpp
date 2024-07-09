vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            int sumA = 0;
            for (char c : a)
                sumA += (c - '0');

            int sumB = 0;
            for (char c : b)
                sumB += (c - '0');

            return sumA < sumB;
        });
    return lst;
}