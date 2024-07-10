#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left++]);
        result.push_back(lst[right--]);
    }
    return result;
}

int main(){
    // Test case for strange_sort_list function
    std::vector<int> input = {3, 1, 4, 1, 5, 9};
    std::vector<int> expected_output = {1, 9, 1, 5, 3, 4};

    std::vector<int> output = strange_sort_list(input);

    // Validate the test case
    assert(issame(output, expected_output));

    return 0;
}