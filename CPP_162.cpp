#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned int hash = 0;
    for (char c : text) {
        hash = ((hash << 4) + hash) ^ (unsigned int)c;
    }

    ostringstream oss;
    oss << setfill('0') << setw(8) << hex << hash;

    return oss.str();
}