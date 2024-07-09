#include <vector>
#include <string>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& str : lst1) {
        sum1 += str.length();
    }

    int sum2 = 0;
    for (const string& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return lst1;
    }
}