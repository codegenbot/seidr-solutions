#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

int main() {
    vector<int> arr = {1, 5, 3, 2, 4, 8};
    vector<string> result = by_length(arr);
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}