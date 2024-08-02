#include <vector>
#include <cassert>

using namespace std;

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
    assert(intersperse({2, 2, 2}, 2) == vector<int>({2, 2, 2, 2, 2}));
    
    return 0;
}