#include <string>

using namespace std;

string solve(int n) {
    string result = "";
    for(int i=0; i<n; i++){
        result += to_string(i) + " ";
    }
    return result;
}