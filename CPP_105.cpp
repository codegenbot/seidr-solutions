#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> v1, vector<string> v2) {
    return v1.size() == v2.size();
}

vector<string> by_length(const vector<string>& vec) {
    vector<string> result;
    for (const auto& str : vec) {
        if (str.length() < 5) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(by_length({{"Nine"}, {"Eight"}, {"Four"}}), vector<string>{"Nine", "Eight", "Four"}));
    return 0;
}