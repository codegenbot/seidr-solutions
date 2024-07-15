#include <vector>
using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i <= lst.size(); i++) {
        if (i % 2 != 0) {
            sum += i;
        } else if(i<lst.size() && i%2==0){
            sum += lst[i-1];
        }
    }
    return sum;
}