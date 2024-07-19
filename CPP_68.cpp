#include <vector>
using namespace std;

vector<int> pluck(vector<pair<int,int>> v) {
    vector<int> result;
    for (const auto& pair : v) {
        if(pair.second == 7)
            result.push_back(pair.first);
    }
    return result;
}

bool issame(vector<int> a,vector<int> b){
    return a.size() == b.size() && equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(pluck({make_pair(7,9),make_pair(3,7)}) == vector<int>({7}) && pluck({make_pair(7,7)}) == vector<int>({}));
    return 0;
}