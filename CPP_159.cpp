#include <vector>
#include <cassert> // Add this line to include the <cassert> header for the assert function

bool issame(vector<int> a, vector<int> b) {
    // Implementation of issame function
    return (a == b); // Compare vectors a and b using the equality operator
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = remaining - eaten;
    return { eaten, left };
}

int main() {
    assert(issame(eat(4, 5, 1), { 5, 0 }));
    // Rest of the main function code
    return 0;
}