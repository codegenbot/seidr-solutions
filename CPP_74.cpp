#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    
    if (lst1.size() > 0 && lst2.size() > 0) {
        int sum1 = 0, sum2 = 0;
        
        for (const auto& str : lst1) {
            sum1 += str.length();
        }
        for (const auto& str : lst2) {
            sum2 += str.length();
        }
        
        if (sum1 < sum2) {
            result = lst1;
        } else if (sum2 < sum1) {
            result = lst2;
        } else {
            result = lst1;
        }
    } else if (lst1.size() > 0) {
        result = lst1;
    } else if (lst2.size() > 0) {
        result = lst2;
    }
    
    return result;
}