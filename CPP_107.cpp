bool issame(vector<int> a, vector<int> b); // Function prototype

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));  // Test the function
}

bool issame(vector<int> a, vector<int> b) {
    return a == b; // Compare two vectors
}