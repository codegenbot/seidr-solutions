// Fix the function signature of issame to use namespace std for vector
bool issame(std::vector<int> a, std::vector<int> b);

// Replace 'vector' with 'std::vector' in the function signature of issame
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Change main function to return void, remove the assert
void main() {
    issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6});
}