#include <vector>
#include <unordered_map>

using namespace std;

int search(const vector<int>& lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int result = -1;
    for (auto& [num, count] : freq) {
        if (count >= num && num > result) {
            result = num;
        }
    }

    return result;
}