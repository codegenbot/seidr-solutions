#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) return i;
    }
    return -1; // or throw an exception, depending on your requirements
}