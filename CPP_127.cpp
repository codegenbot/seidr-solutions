#include <algorithm>
#include <string>

using namespace std;

int main() {
    int start = max({interval1.first, interval2.first});
    int end = min({interval1.second, interval2.second});

    if(end < start) {
        cout << "NO";
    } else {
        cout << to_string(make_pair(start, end));
    }

    return 0;
}