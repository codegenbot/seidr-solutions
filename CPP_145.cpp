bool issame(const vector<int>& a, const vector<int>& b);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

void sort_vector_by_sum_of_digits(vector<int>& nums) {
    // Implementation of sorting logic
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}