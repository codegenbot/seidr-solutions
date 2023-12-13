#include <vector>
#include <cassert>

using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int temp = abs(num);
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main() {
     assert (count_nums({1}) == 1);
     assert (count_nums({-1, 0, 2, -35}) == 4);
     assert (count_nums({-100, 200, 10}) == 3);
     return 0;
}