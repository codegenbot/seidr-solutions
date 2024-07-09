#include <string>
#include <algorithm>

using namespace std;

bool compare_one(const string& a, const string& b) {
    if (stoi(a) > stoi(b)) {
        return true;
    } else if (stoi(a) < stoi(b)) {
        return false;
    } else {
        return false;
    }
}