#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int a = 0, b = 0;
    for (int i : lst) {
        if (i < 0 && i > a) {
            a = i;
        }
        else if (i > 0 && i < b) {
            b = i;
        }
    }
    return {(a > 0) ? a : 0, (b < 0) ? b : 0};
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "largest_smallest_integers({2, 4, 1, 3, 5, 7}) == {" << result1[0] << "," << result1[1] << "}" << endl;

    vector<int> lst2 = {};
    vector<int> result2 = largest_smallest_integers(lst2);
    cout << "largest_smallest_integers({}) == {" << result2[0] << "," << result2[1] << "}" << endl;

    vector<int> lst3 = {0};
    vector<int> result3 = largest_smallest_integers(lst3);
    cout << "largest_smallest_integers({0}) == {" << result3[0] << "," << result3[1] << "}" << endl;

    return 0;
}