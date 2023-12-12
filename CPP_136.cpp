#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int max = 0, min = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > max) {
            max = lst[i];
        } else if (lst[i] < min) {
            min = lst[i];
        }
    }
    return vector<int>{max, min};
}