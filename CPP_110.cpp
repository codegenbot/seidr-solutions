#include <vector>
#include <set>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    set<int> s(lst1.begin(), lst1.end());
    for (int num : lst2) {
        if (s.find(num) != s.end()) {
            s.erase(s.find(num));
            return "YES";
        }
    }
    return "NO";
}