#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    return std::vector<int>(unique_numbers.begin(), unique_numbers.end()); 

}

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}