#include <vector>
using namespace std;

string intersection(vector<pair<int,int>> interval1, vector<pair<int,int>> interval2) {
    int start = max(interval1[0].first, interval2[0].first);
    int end = min(interval1[0].second, interval2[0].second);

    if (start > end) return "NO";
    
    bool isPrime = true;
    for (int i = 2; i * i <= end - start + 1; i++) {
        if ((end - start + 1) % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "YES" : "NO";
}