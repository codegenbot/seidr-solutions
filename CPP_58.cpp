#include <vector> // Add this line to include the vector type

#include <algorithm>
#include <iterator>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) { // Fix function signature
    return a == b; // Fix comparison operator
}

vector<int> common(vector<int> l1, vector<int> l2) { // Define the common function with return type
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {})); // Fix the assert statement
    return 0;
}