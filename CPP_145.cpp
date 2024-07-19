// Update the function signature
bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}

// Declare the order_by_points function before main
vector<int> order_by_points(vector<int>& nums);

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}