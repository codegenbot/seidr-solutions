#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return (a == b);
}

// Forward declaration
pair<string, string> reverse_delete(const string& s, const string& c);

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    
    return 0;
}