#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class CustomVectorFunctions {
public:
    static vector<int> common(const vector<int>& a, const vector<int>& b) {
        vector<int> result;
        for (int num : a) {
            if (find(b.begin(), b.end(), num) != b.end()) {
                result.push_back(num);
            }
        }
        return result;
    }

    static bool issame(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
};