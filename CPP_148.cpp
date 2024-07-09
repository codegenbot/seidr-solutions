```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> result;

    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    if (planet1 == planet2) {
        result.push_back("The two planets are the same.");
    } else {
        result.push_back("The two planets are different.");
    }

    return result;
}