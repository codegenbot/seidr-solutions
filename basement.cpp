#include <vector>
using namespace std;

int basement(const vector<int>& numbers) {
    for(int i = 0; i < numbers.size(); i++) {
        int sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += numbers[j];
            if(sum < 0)
                return i;
        }
    }
    return -1;
}