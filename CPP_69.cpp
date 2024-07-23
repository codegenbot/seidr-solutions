#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int search(vector<int> lst) {
    map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    int max = 0;
    for (auto p : countMap) {
        if (p.first > 0 && p.second >= std::count(lst.begin(), lst.end(), p.first)) {
            return p.first;
        }
        if (p.second > max) {
            max = p.second;
        }
    }
    return -1;
}