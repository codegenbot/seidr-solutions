#include <vector>
#include <string>

bool issame(const vector<int>& a, const vector<int>& b){
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    // main function implementation
    return 0;
}