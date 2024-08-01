// Change function signature to use std::vector<int>
bool issame(std::vector<int> a, std::vector<int> b);

// Change main function return type to int
int main();

// Update function definition to use full namespace std::vector<int>
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Update main function to return int
int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>{31, 135}));
    return 0;
}