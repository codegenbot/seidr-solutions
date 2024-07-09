#include <algorithm>
int testMain() {
    vector<string> v1 = splitString("ahmed     , gamal");
    sort(v1.begin(), v1.end()); // Sort the vectors to compare correctly
    assert(isSameVectors(v1, {"ahmed", "gamal"}));
    return 0;
}