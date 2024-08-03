#include <vector>
#include <string>
#include <cassert>
using namespace std;

string concatenate(const vector<string>& strings){
    string result = "";
    for (const string& s : strings) {
        result += s;
    }
    return result;
}