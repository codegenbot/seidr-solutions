#include <vector>
#include <string>

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

vector<string> bf(string a, string b) {
    if(a.length() != b.length()) {
        return {};
    }
    vector<string> result = {a, b};
    return result;
}

int main() {
    cout << (compareVectors(bf("Jupiter", "Makemake"), {"Jupiter", "Makemake"}) ? "True" : "False") << endl;
    return 0;
}