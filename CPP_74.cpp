#include <vector>
#include <string>
using namespace std;

vector<string> total_match(const vector<string>& a, const vector<string>& b) {
    vector<string> result;
    int total_chars_lst1 = 0;
    int total_chars_lst2 = 0;

    for (const string& str : a) {
        total_chars_lst1 += str.size();
    }

    for (const string& str : b) {
        total_chars_lst2 += str.size();
    }
    
    if (total_chars_lst1 == total_chars_lst2) {
        result = a;
        result.insert(result.end(), b.begin(), b.end());
    }
    
    return result;
}