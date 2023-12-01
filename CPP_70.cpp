#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right)
            result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}

int main(){
    assert (issame(strange_sort_list({111111}) , {111111}));
    // Additional test cases can be added here
    
    return 0;
}