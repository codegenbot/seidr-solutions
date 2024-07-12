#include <vector>
using namespace std;

bool isEqual(vector<vector<string>> a, vector<vector<string>> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& str : a[i]) {
            if (find(begin(b[i]), end(b[i]), str) != end(b[i])) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(isEqual({{"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}}, {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}