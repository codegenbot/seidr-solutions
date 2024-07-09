```cpp
#include <string>
#include <algorithm>

using namespace std;

string compareOne(string a, string b) {
    double numA = stod(a);
    double numB = stod(b);

    if (numA > numB)
        return a;
    else if (numA < numB)
        return b;
    else
        return "None";
}