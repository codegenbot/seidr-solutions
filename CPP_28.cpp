#include <string>
#include <vector>
#include <cassert>

using namespace std;

string concatenate(vector<string> strings){
    string result;
    for(const string& str : strings){
        result += str;
    }
    return result;
}

int main(){
    assert (concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}