```
#include <iostream>
#include <vector>
using namespace std;

string join(vector<int> vec, string sep) {
    string result = "";
    for (int num : vec) {
        if (!result.empty()) {
            result += sep;
        }
        result += to_string(num);
    }
    return result;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg == 0) ? 0 : maxNeg, (minPos == INT_MAX) ? 0 : minPos};
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "For list " << join(lst1, ", ") << ", the output is " << join(result1, ", ") << endl;

    vector<int> lst2 = {};
    vector<int> result2 = largest_smallest_integers(lst2);
    cout << "For list " << join(lst2, ", ") << ", the output is " << join(result2, ", ") << endl;

    vector<int> lst3 = {0};
    vector<int> result3 = largest_smallest_integers(lst3);
    cout << "For list " << join(lst3, ", ") << ", the output is " << join(result3, ", ") << endl;

    return 0;
}