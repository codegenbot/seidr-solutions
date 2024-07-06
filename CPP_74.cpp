#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    
    for (const auto& str : lst2) {
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

int main() {
    vector<string> v1 = {"hi", "admin"};
    vector<string> v2 = {"hI", "Hi"};
    
    for (const auto& str : total_match(v1, v2)) {
        cout << str << endl;
    }
    
    return 0;
}