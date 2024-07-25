#include <vector>
using namespace std;

int basement(vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += numbers[i];
        if (sum < 0)
            return i;
    }
}