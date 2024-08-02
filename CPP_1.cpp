#include <vector>
#include <string>
#include <cassert>
using namespace std;

void assertEquals(vector<string> v1, vector<string> v2) {
    assert(v1.size() == v2.size());
    for (size_t i = 0; i < v1.size(); ++i) {
        assert(v1[i] == v2[i]);
    }
}

vector<string> separate_paren_groups(string paren_string);

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
  assertEquals(separate_paren_groups("((a)(b)(c))"), vector<string>{"(a)", "(b)", "(c)"});
  assertEquals(separate_paren_groups("( ) (( )) (( )( ))"), vector<string>{"()", "(())", "(()())"});

  return 0;
}