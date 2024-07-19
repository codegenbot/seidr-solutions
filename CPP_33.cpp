bool issame(vector<int> a, vector<int> b);

bool sort_third(const vector<int>& a, const vector<int>& b) {
    return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
}

sort(l.begin(), l.end(), sort_third);

return l;