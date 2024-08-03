#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool issame(int i) {
    map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                           {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"},
                           {9, "Nine"}};
    return m.find(i) != m.end();
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (issame(i)) {
            result.push_back(to_string(i));
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}