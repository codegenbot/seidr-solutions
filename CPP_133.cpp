#include <vector>
using namespace std;

int sum_squares(vector<float> lst){
    int result = 0;
    for (float num : lst) {
        result += pow(num, 2);
    }
    return result;
}