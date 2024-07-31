#include <vector>
#include <cassert>

using namespace std;

bool issame(std::vector<float> a, std::vector<float> b) {
    // Function implementation remains the same
}

int main() {
    assert(issame(vector<float>{12.0, 11.0, 15.0, 13.0, 14.0}, {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}