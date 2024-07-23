#include <unordered_map>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    unordered_map<int, int> countMap;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        int count = 0;
        for (char c : sub) {
            count++;
        }
        if (countMap.count(count))
            return false;
        countMap[count] = 1;
    }
    return true;
}