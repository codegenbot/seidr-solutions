#include <algorithm>
#include <vector>

// Function to check if two vectors are same
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Function to remove duplicates from vector
std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

// Custom function for removing duplicate elements in the vector
std::vector<int>::iterator myunique(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    if (start == end)
        return end;

    sort(start, end);

    auto it = start;
    while (it != end) {
        auto next = it + 1;
        while (next != end && *next == *it) {
            ++next;
        }
        it = next;
    }

    return it;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    return 0;
}