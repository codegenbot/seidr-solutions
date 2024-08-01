#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    vector<string> strings;
    string substring;

    cout << "Enter the list of strings: ";
    for (int i = 0; i < 4; ++i) {
        cin >> strings[i];
    }

    cout << "Enter the substring to filter by: ";
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if (issame(result, {"grunt", "prune"})) {
        cout << "The filtered list is same as expected." << endl;
    } else {
        cout << "The filtered list does not match the expected output." << endl;
    }

    return 0;
}