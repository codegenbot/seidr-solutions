#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2){
    vector<int> result;

    // Sort the vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    // Find common elements
    int i = 0, j = 0;
    while(i < l1.size() && j < l2.size()){
        if(l1[i] == l2[j]){
            // Add common element to result
            result.push_back(l1[i]);
            i++;
            j++;
        }
        else if(l1[i] < l2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    // Remove duplicates from result
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}), {}));

    return 0;
}