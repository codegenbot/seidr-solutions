#include <string>
using namespace std;

string anti_shuffle(const string& s);

int main() {
    assert(anti_shuffle("olleh dlrow") == "ehllo dlorw");
    assert(anti_shuffle("bca efc") == "abc cef");
    return 0;
}