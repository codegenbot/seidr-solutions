Here is the completed code:

#include <vector>
#include <algorithm>

using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or any other sentinel value that indicates "None"

    vector<int> unique;
    unique.reserve(lst.size());
    for (const auto& num : lst) {
        if (std::find(unique.begin(), unique.end(), num) == unique.end())
            unique.push_back(num);
    }

    sort(unique.begin(), unique.end());

    if (unique.size() < 2)
        return -1; // or any other sentinel value that indicates "None"

    auto it = unique.begin();
    std::advance(it, 1); // Move to the second element

    return *it;
}