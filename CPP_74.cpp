#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // your logic here to check if two vectors are same
    return true;  // or false as per your requirement
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    if (sum2 < sum1) return lst2;
    return lst1;
}