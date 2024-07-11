using namespace std;

#include <algorithm>
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) { 
    if (all_of(lst.begin(), lst.end(), [](const string& str){return str.length() % 2 != 0;})){
        throw runtime_error("The input list must have at least one string with an odd length.");
    }

    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
              [](const string& a, const string& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });

    return result;
}