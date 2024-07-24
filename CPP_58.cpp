#include <vector>
#include <set>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4};
    vector<int> l2 = {2, 3, 5};

    vector<int> common_elements = common(l1, l2);
    for (int num : common_elements) {
        cout << num << " ";
    }
    return 0;
}