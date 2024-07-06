#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[b.size()-i-1]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0)
        return vector<int>(array.begin(), array.end());
    else
        return vector<int>(array.rbegin(), array.rend());
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}