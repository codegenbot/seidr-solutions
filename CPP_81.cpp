#include <assert.h>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({4.0, 3.8}), vector<string>({"A+", "B+"})));
    //... rest of your code
}