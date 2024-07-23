#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string, int> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (pair<string, int> pair : dicts | map_to_vector) {
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}