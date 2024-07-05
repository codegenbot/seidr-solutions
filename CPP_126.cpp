#include <vector>
#include <unordered_map>

using namespace std;

bool is_sorted(vector<int> lst) {
    if (lst.empty()) return true;
    
    unordered_map<int, int> freq;
    for (size_t i = 0; i < lst.size(); ++i) {
        if (i > 0 && lst[i] < lst[i-1]) return false;
        freq[lst[i]]++;
        if (freq[lst[i]] > 2) return false;
    }
    
    return true;
}