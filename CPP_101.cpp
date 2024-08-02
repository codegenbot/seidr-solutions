#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    assert(issame(words_string("ahmed , gamal"), {"ahmed", "gamal"}));
    return 0;
}