#include <vector>
#include <string>

using namespace std;

bool check_odd_size(vector<string> a, vector<string> b) {
    return a.size() % 2 == 1 && b.size() % 2 == 1;
}

vector<string> odd_count(initializer_list<const char*> args) {
    vector<string> result;
    for (auto arg : args) {
        result.push_back(string(arg));
    }
    return result;
}