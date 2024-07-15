// Corrected function signature
bool issame(vector<float> a, vector<float> b);

// Forward declaration
pair<float, float> find_closest_elements(vector<float> numbers);

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    // Add more test cases as needed
    return 0;
}