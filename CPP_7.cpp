#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (!filter_by_substring(a[i], "same").size()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings1 = {"apple", "banana", "cherry", "date"};
    vector<string> strings2 = {"apple same", "banana same", "cherry same", "date same"};
    
    if (same(strings1, strings2)) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }
    return 0;
}