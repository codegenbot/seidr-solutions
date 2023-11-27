#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return 0;
    }
    sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    vector<int> lst = {5, 3, 7, 2, 8};
    int result = next_smallest(lst);
    return 0;
}