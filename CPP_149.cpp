#include <cassert>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

namespace {
    bool same(vector<string> a, vector<string> b) {
        if (a.size() != b.size()) return false;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < b[i]) return true;
            if (a[i] > b[i]) return false;
        }
        return true;
    }

    vector<string> sorted_list_sum(vector<string> lst) {
        vector<string> result;
        for (const auto& str : lst) {
            if (stoi(str) % 2 == 0) {
                result.push_back(str);
            }
        }
        sort(result.begin(), result.end(),
             [&result](const string& a, const string& b) {
                 stringstream ss1(a), ss2(b);
                 int num1 = 0, num2 = 0;
                 ss1 >> num1;
                 ss2 >> num2;
                 return num1 < num2;
             });
        return result;
    }
}