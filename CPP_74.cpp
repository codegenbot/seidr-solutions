#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int sum = 0;
        for (const auto& str : lst) {
            sum += str.size();
        }
        return sum;
    };

    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);

    if (total1 < total2) {
        return lst1;
    } else if (total2 < total1) {
        return lst2;
    } else {
        return lst1;
    }
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    // Add more test cases if needed
    return 0;
}