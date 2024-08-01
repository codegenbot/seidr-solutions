#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}