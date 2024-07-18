#include <vector>
#include <cassert>

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i != 0){
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    using namespace std;
    
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    
    return 0;
}