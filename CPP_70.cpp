#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

int main() {
    std::vector<int> result = strange_sort_list({111111});
    return 0;
}