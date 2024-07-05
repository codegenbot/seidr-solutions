#include <vector>
#include <unordered_map>

using namespace std;

bool is_sorted(vector<int>& lst) {
    if (lst.empty()) return true;
    
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i-1]) return false;
    }
    
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
        if (freq[num] > 2) return false;
    }
    
    return true;
}