#include <vector>
using namespace std;

vector<int> pluck(vector<pair<vector<int>, int>> v) {
    vector<int> result;
    for (const auto& pair : v) {
        if (pair.second == 7) {
            result = pair.first;
            break;
        }
    }
    return result;
}

bool issame(vector<int> a,vector<int>b){
    return a.size() == b.size() && a == b;
}

int main() {
    assert(pluck({{7,9},7},{7}) == vector<int>({7}) && pluck({{7},7}) == vector<int>({}));
    return 0;
}