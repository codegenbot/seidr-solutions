#include <string>

bool same_chars(const string& s0, const string& s1){
    string sorted_s0 = s0;
    string sorted_s1 = s1;
    sort(sorted_s0.begin(), sorted_s0.end());
    sort(sorted_s1.begin(), sorted_s1.end());
    return sorted_s0 == sorted_s1;
}