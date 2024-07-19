bool issame(vector<int> a, vector<int> b) {
    return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
}

void sort_third(vector<int>& l) {
    sort(l.begin(), l.end(), issame);
}

int main() {
    vector<int> l = {3, 6, 9, 1, 4, 7};
    sort_third(l);
    return l;
}