#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst){
    if (lst.size() < 2) return -1; // Assuming -1 as None for integer return type
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    return -1; // Return -1 if no second smallest element is found
}