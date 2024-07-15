#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b){
  if (a.size() != b.size()) {
      return false;
  }

  for (size_t i = 0; i < a.size(); i++) {
      if (a[i] != b[i]) {
          return false;
      }
  }

  return true;
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
    string group;

    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));