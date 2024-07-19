#include <vector>
#include <unordered_map>
using namespace std;

int search(vector<int> lst) {
    int res = -1;
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->first > res) {
            res = it->first;
        }
    }
    return res;
}

int main() {
    search(vector<int>({3, 10, 10, 9, 2}));
    return 0;
}