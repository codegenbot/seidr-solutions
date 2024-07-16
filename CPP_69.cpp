#include <vector>
#include <unordered_map>

using namespace std;

int search(vector<int> lst) {
    int result = -1;
    unordered_map<int, int> freq;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->second >= it->first) {
            result = max(result, it->first);
        }
    }
    
    return result;
}