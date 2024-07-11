#include <vector>
using namespace std;

int luhn(vector<int>& cc) {
    int sum = 0;
    for(int i = cc.size() - 1; i >= 0; i--) {
        if(i % 2 == 1) {
            int temp = cc[i] * 2;
            if(temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += cc[i];
    }
    return sum;
}