```cpp
#include <algorithm>
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int l[] = {10,20,-30};
    vector<int> v(l,l+3);
    return abs(*std::max_element(v.begin(),v.end()));
}