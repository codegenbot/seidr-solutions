#include <vector>
#include <algorithm>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    set<int> s(lst1);
    for (int num : lst2) {
        if (s.find(num % 2) == s.end()) {
            return "NO";
        }
        s.insert(num % 2);
    }
    return "YES";
}