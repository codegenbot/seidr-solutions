#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for(int i=0; i<n.size(); i++) {
        int sum = 0;
        int num = abs(n[i]);
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if(sum > 0) {
            if(n[i] >= 0)
                count++;
            else
                count += to_string(n[i]).length() - 1;
        }
    }
    return count;
}