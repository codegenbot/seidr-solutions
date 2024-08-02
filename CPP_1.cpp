#include <vector>
#include <cassert>
using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& a, const vector<string>& b) {
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

vector<string> separate_paren_groups(string paren_string) {
   vector<string> result;
   string current_group;
   size_t open_count = 0;

   for (char c : paren_string) {
       if (c == '(') {
           if (open_count > 0) {
               current_group += c;
           }
           open_count++;
       } else if (c == ')') {
           open_count--;
           if (open_count == 0) {
               result.push_back(current_group);
               current_group.clear();
           } else {
               current_group += c;
           }
       }
   }

   return result;
}

int main() {
  vector<string> a = separate_paren_groups("((a)(b)(c))");
  vector<string> b = {"(a)", "(b)", "(c)"};
  
  assert(issame(a, b));

  return 0;
}