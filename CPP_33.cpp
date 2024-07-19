bool issame(vector<int> a, vector<int> b);

bool sort_third(vector<int>& l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
    });
    return l;
}

int main() {
    vector<int> l = {9, 4, 6, 12, 3};
    sort_third(l);
    return 0;
}