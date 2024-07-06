#include <vector>
#include <algorithm>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> set_of_numbers(numbers.begin(), numbers.end());
    return std::vector<int>(set_of_numbers.begin(), set_of_numbers.end());
}