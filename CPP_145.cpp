
// Declare the issame function before main
bool issame(const vector<int>& a, const vector<int>& b);

// Update the sort function call to use issame
sort(nums.begin(), nums.end(), [](int a, int b) {
    // Existing code remains unchanged
});

// Define the issame function
bool issame(const vector<int>& a, const vector<int>& b) {
    // Implement comparison logic
    // Return true if a and b are the same, false otherwise
}

// Call issame in the main function
int main() {
    // Existing code remains unchanged
}