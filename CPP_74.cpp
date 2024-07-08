#include <vector>
#include <string>

bool operator==(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

int total_match(const vector<string>& lst1, const vector<string>& lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }
    if (sum1 < sum2) return 0; 
    else if (sum1 > sum2) return 1;
    else return 0;
}

int main() {
    assert(std::vector<stdstring>({"this"}) == std::vector<string>(), true);
    return 0;
}