#include <algorithm>
#include <vector>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0)
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    else
        return l[n/2];
}

int main() {
    // use median function here...
}