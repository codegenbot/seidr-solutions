#include <vector>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2);
bool issame(vector<int>& a, vector<int>& b);

vector<int> common(vector<int> l1, vector<int> l2){
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    int i = 0;
    int j = 0;
    
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            if (result.empty() || result.back() != l1[i]) {
                result.push_back(l1[i]);
            }
            i++;
            j++;
        }
    }
    
    return result;
}

bool issame(vector<int>& a, vector<int>& b){
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    // Add more test cases if necessary
    
    return 0;
}