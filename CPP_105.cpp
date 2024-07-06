#include <string>
#include <vector>

using namespace std;

bool by_length(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i].size() != b[i].size())
            return false;
    return true;
}

int main() {
    vector<int> arr1 = {3, 2, 9};
    vector<int> arr2 = {4, 7, 5};
    vector<string> result1 = by_length(arr1);
    vector<string> result2 = by_length(arr2);

    if (by_length(result1, result2))
        cout << "Arrays are same in terms of length" << endl;
    else
        cout << "Arrays are not same in terms of length" << endl;

    return 0;
}