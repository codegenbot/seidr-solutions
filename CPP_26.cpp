#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    std::vector<int> result(unique_numbers.begin(), unique_numbers.end());
    return result;
}

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() {
    assert(same(remove_duplicates({int(1), int(2), int(3), int(2), int(4), int(3), int(5)}), {int(1), int(4), int(5)}));
    return 0;
}