```cpp
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    double d1 = stod(a.replace(".", ",")), d2 = stod(b.replace(".", ","));
    
    if(d1 > d2) {
        return a;
    } 
    else if(d2 > d1) {
        return b;
    } 
    else {
        return "None";
    }
}