bool issame(vector<int> a, vector<int> b) {
   return a == b;
}

vector<int> largest_smallest_integers(vector<int> a, vector<int> b);

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}