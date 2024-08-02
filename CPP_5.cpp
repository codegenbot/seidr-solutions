#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> intersperse(const vector<int>& numbers, int delimiter) {
    vector<int> result;
    if(numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i) {
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), std::vector<int>({2, 2, 2, 2, 2}));  // Explicitly specify vector type
    
    return 0;
}