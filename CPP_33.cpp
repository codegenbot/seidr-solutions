bool issame(vector<int> a, vector<int> b) {
    return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
}

void sort_third(vector<int>& l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return issame(a, b);
    });
}

int main() {
    // Other code using the sort_third function
    return 0;
}