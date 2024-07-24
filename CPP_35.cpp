#include <algorithm>
#include <cmath>

int main() {
    long int maximum_value;
    vector<long int> l;

    cin >> maximum_value;
    for(long int i = 0; i<maximum_value; ++i)
        cin>>l[i];

    return *std::max_element(l.begin(), l.end());
}