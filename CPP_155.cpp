#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    vector<int> counts(2, 0);
    string num_str = to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    std::vector<int> even_odd_count(int num);

    assert(issame(even_odd_count(0), {1, 0}));
}