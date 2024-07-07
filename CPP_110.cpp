#include <vector>
#include <set>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    set<int> even;
    for (int num : lst2) {
        if (num % 2 == 0) {
            even.insert(num);
        }
    }

    for (int num : lst1) {
        if (even.count(num)) {
            continue;
        } else if (even.find(num) != even.end()) {
            even.erase(even.find(num));
        } else {
            return "NO";
        }
    }

    return "YES";
}