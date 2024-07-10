#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    vector<string> a, b;
    string input;
    
    // Read input for vector a
    while (cin >> input && input != "-1"){
        a.push_back(input);
    }
    
    // Read input for vector b
    while (cin >> input && input != "-1"){
        b.push_back(input);
    }
    
    // Check if vectors a and b are the same
    assert(issame(a, b));
    
    return 0;
}