#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}) );
    
    // Your code here
}