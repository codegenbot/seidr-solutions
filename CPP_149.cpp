#include <algorithm>
#include <vector>
#include <string>

using namespace std;

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
    int sum = 0;
    for(string s : lst) {
        sum += s.length();
    }
    cout << "Sum of the lengths: " << sum << endl;
    return lst;
}