#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return NULL;
    }
    sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    assert(next_smallest(vector<int>{-35, 34, 12, -45}) == -35);
    return 0;
}