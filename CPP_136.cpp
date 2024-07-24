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
        }
        else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }
    
    return {(max_negative >= 0)? 0 : max_negative, (min_positive <= 0)? 0 : min_positive};
}

vector<int> result1 = largest_smallest_integers({2, 4, 1, 3, 5, 7});
cout << "largest_smallest_integers({2, 4, 1, 3, 5, 7}) == {" << result1[0] << "," << result1[1] << "}\n";

vector<int> result2 = largest_smallest_integers({});
cout << "largest_smallest_integers({}) == {" << result2[0] << "," << result2[1] << "}\n";

vector<int> result3 = largest_smallest_integers({0});
cout << "largest_smallest_integers({0}) == {" << result3[0] << "," << result3[1] << "}\n";