#include <string>
#include <map>
using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            allUpper = false;
            allLower = false;
            break;
        } else if ((isupper(pair.first[0]) && !allUpper) || (islower(pair.first[0]) && !allLower)) {
            allUpper = allLower = false;
        }
    }

    return allUpper || allLower;
}

int main() {
    assert(check_dict_case({}) == false);
    // Implement your logic here
    map<string, string> dict = {{"hello", "HELLO"}, {"world", "WORLD"}};
    if (check_dict_case(dict)) {
        cout << "The dictionary case is either all upper or all lower." << endl;
    } else {
        cout << "The dictionary case is mixed." << endl;
    }
}