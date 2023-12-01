#include <string>
using namespace std;

string functionName(int n) {
    string result = "";
    for(int i=0; i < n; i++){
        result += to_string(i) + " ";
    }
    return result;
}