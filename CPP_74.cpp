#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (lst1.empty() && lst2.empty()) return {};
    
    int sum1 = 0, sum2 = 0;
    
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    for (const auto& str : lst2) {
        sum2 += str.length();
    }
    
    if (sum1 < sum2) {
        return lst1;
    } else if (sum2 < sum1) {
        return lst2;
    } else {
        return lst1; 
    }
}