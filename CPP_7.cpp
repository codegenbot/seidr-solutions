#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        bool found = false;
        for (const string& str : b) {
            if (str.find(a[i]) != string::npos)
                found = true;
        }
        if (!found)
            return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "mango"};
    string substring = "an";
    if (same(strings, filter_by_substring(strings, substring)))
        cout << "Vectors are same." << endl;
    else
        cout << "Vectors are not same." << endl;
    return 0;
}