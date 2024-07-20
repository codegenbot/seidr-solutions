#include <algorithm>
#include <vector>
#include <string>

using namespace std;

long long sorted_list_sum(vector<string> lst) {
    vector<string> result = vector_sort(lst);
    long long sum = 0;
    for (const string& str : result) {
        sum += stol(str);
    }
    return sum;
}

vector<string> vector_sort(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b){return a.length() % 2 && b.length() % 2;});
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.length() == b.length()) 
                return a < b;
            else return a.length() < b.length();
        });
    return lst;
}