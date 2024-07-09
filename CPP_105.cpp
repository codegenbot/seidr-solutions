```cpp
#include <vector>
#include <map>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;

    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                        {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
            result.push_back(numMap[i]);
        }
    }

    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), vector<string>({"Nine", "Four", "Eight"})));
    return 0;
}