#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << compare_one(a, b) << endl;
    
    return 0;
}