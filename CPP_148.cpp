```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> result;

    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    if (planet1 == planet2) {
        result.push_back("The two planets are the same.");
    } else {
        if (abs(jupiter - mars) < abs(mercury - venus)) {
            result.push_back("Mars is closer to Jupiter than Venus is to Mercury.");
        } else {
            result.push_back("Venus is closer to Mercury than Mars is to Jupiter.");
        }
    }

    return result;
}

int main() {
    assert (issame(bf("Jupiter", "Makemake") , {"The two planets are different."}));
    return 0;
}