// Change "vector<int>" to "std::vector<int>" in function signatures
bool issame(std::vector<int> a, std::vector<int> b);

// Fix function definition
bool issame(std::vector<int> a, std::vector<int> b) {
    // Code remains the same
}

// Add "std::" before "vector<int>"
std::vector<int> count_up_to(int n);

// Fix function definition
std::vector<int> count_up_to(int n) {
    // Code remains the same
}

// Change "assert" to "assert"
int main() {
    assert(issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    
    return 0;
}