#include <vector>
#include <cassert>

bool isEqual(const vector<int>& a, const vector<int>& b) { 
    return a == b; 
}

vector<int> intersperse(const vector<int>& numbers, int delimiter) { 
    vector<int> result; 
    for (size_t i = 0; i < numbers.size(); i++) { 
        result.push_back(numbers[i]); 
        if (i != numbers.size() - 1) { 
            result.push_back(delimiter); 
        } 
    } 
    return result; 
}

int main() { 
    assert(isEqual(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2})); 
    return 0; 
}