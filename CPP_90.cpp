#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    if(lst.size() < 2){
        return 0;
    }

    sort(lst.begin(), lst.end());

    int smallest = lst[0];
    int second_smallest = lst[1];

    if(smallest == second_smallest){
        return 0;
    }

    return second_smallest;
}