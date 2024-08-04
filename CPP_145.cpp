#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> order_by_points(vector<int> points) {
   // Define the logic to order the points as required
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
}