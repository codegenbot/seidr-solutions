#include <vector>
#include <string>

bool same(vector<string> a,vector<string>b){
    return a == b;
}

int main() {
    assert(same(numerical_letter_grade({4.0}), {"A+"}));
    return 0;
}