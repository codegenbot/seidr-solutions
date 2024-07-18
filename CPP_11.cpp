#include <string>
using namespace std;

string string_xor(const string &a, const string &b) {
    string result = "";
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    
    return 0;
}