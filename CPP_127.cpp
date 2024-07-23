#include <vector>
using namespace std;

string intersection(vector<pair<int, int>> interval1, vector<pair<int, int>> interval2) {
    pair<int, int> common = make_pair(max({interval1[0].first, interval2[0].first}), min({interval1[0].second, interval2[0].second}));

    if (common.first > common.second)
        return "NO";
    
    bool isPrime = true;
    for(int i = 2; i*i <= common.second - common.first + 1; i++) {
        if((common.second - common.first + 1) % i == 0)
            isPrime = false;
        break;
    }

    return isPrime ? "YES" : "NO";
}