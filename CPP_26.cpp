#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> nums) {
    vector<int> result;
    for (int num : nums) {
        bool found = false;
        for (int i = 0; i < result.size(); i++) {
            if (result[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    assert(same(remove_duplicates(numbers), {1, 2, 3, 4, 5})); 
    return 0;
}