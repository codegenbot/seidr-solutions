#include <vector>
#include <cassert>

using namespace std;

bool monotonic(const vector<float>& l) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9.0f, 9.0f, 9.0f, 9.0f}) == true);

    return 0;
}