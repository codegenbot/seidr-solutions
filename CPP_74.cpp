#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int total = 0;
        for (const string& s : lst) {
            total += s.size();
        }
        return total;
    };

    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);

    if (total1 < total2 || (total1 == total2 && lexicographical_compare(lst1.begin(), lst1.end(), lst2.begin(), lst2.end()))) {
        return lst1;
    } else {
        return lst2;
    }
}