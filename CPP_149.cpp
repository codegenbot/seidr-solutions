#include <algorithm>
#include <vector>
#include <string>

using namespace std;

long long vector_sort(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){return (a.length() + a.length()) % 2 && (b.length() + b.length()) % 2;});
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.length() == b.length()) 
                return a < b;
            else return a.length() < b.length();
        });
    long long sum = 0;
    for (string s : lst) {
        sum += s.length();
    }
    return sum;
}