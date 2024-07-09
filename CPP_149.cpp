```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); ++i){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<vector<string>> lst) {
    vector<string> result;

    for (const auto& vec : lst) {
        string str;
        for(const auto& s:vec) {
            str += s + " ";
        }
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return result;
}

int main() {
    assert(sorted_list_sum({{"aaaa"}, {"bbbb"}, {"d"}, {"cc"}}) == {" cc", " d", "aaaa bbb"});
    return 0;
}