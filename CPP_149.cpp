#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return a == a;
}

std::vector<int> sorted_list_sum(std::vector<std::string> lst) { 
    std::vector<int> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str.size());
        }
    }

    sort(result.begin(), result.end());

    return result;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}));
    std::cout << sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) << std::endl;
}