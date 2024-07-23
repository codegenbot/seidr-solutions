#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> uniqueNums = unique(numbers);
    
    return 0;
}