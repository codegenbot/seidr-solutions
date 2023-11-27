#include <vector>  // Add this line at the beginning to include the vector header

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

// Function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    // Compare the sizes of the vectors
    if (a.size() != b.size()) {
        return false;
    }

    // Compare each element of the vectors
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Check if generate_integers returns the correct result
    vector<int> expected = {};
    vector<int> result = generate_integers(17, 89);
    
    // Compare the expected result with the actual result using issame function
    if (issame(result, expected)) {
        // Print a success message
        cout << "Result is correct!" << endl;
    } else {
        // Print an error message
        cout << "Result is incorrect!" << endl;
    }

    return 0;
}