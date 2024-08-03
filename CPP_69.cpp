#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int x : lst) {
        if (!freq.count(x))
            freq[x] = 1;
        else
            freq[x]++;
    }
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first)
            return p->first;
    }
    return -1;
}