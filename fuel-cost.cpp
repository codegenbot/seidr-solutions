#include <vector>
using namespace std;

int solution(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        if (num >= 3) {
            sum += (num / 3 - 2);
        }
    }
    return sum;
}