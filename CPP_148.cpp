#include <vector>
#include <string>
#include <cassert>
#include <sstream>
#include <iostream>

using namespace std;

bool compareVectors(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        cout << "Error: Vectors are not the same size." << endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            cout << "Error: Strings at index " << i << " do not match." << endl;
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> result = bf("Jupiter", "Makemake");
    assert(compareVectors(result, {"Jupiter", "Makemake"}));
    return 0;
}