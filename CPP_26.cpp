#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    return std::vector<int>(unique_numbers.begin(), unique_numbers.end());
}

bool checkIfSame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}