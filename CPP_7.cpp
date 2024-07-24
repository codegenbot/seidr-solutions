#include <vector>
#include <set>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string substring = "an";
    
    if (issame(filter_by_substring(strings, substring), {"banana"})) {
        cout << "The sets are the same." << endl;
    } else {
        cout << "The sets are not the same." << endl;
    }
    return 0;
}