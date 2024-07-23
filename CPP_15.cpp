#include <string>
using namespace std;
string string_sequence(int n){
    string result;
    for (int i = 0; i <= n; ++i) {
        result += to_string(i) + " ";
    }
    result.pop_back(); // To remove the extra space at the end
    return result;
}