#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int max_negative = 0;
    int min_positive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > max_negative) {
            max_negative = num;
        } else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }

    return {(max_negative >= 0 ? 0 : max_negative), (min_positive <= 0 ? 0 : min_positive)};
}

int main1() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "Largest negative integer: " << result1[0] << ", Smallest positive integer: " << result1[1] << endl;

    vector<int> lst2 = {};
    vector<int> result2 = largest_smallest_integers(lst2);
    cout << "Largest negative integer: " << result2[0] << ", Smallest positive integer: " << result2[1] << endl;

    vector<int> lst3 = {0};
    vector<int> result3 = largest_smallest_integers(lst3);
    cout << "Largest negative integer: " << result3[0] << ", Smallest positive integer: " << result3[1] << endl;
    
    return 0;
}