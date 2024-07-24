#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    int total = 0;
    
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            total += str.length();
        }
    }
    
    vector<string> result;
    
    if (total > 0) {
        result.push_back(to_string(total));
    } else {
        result.push_back("0");
    }
    
    return {result};
}