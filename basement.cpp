#include <vector>
using namespace std;

int basementIndex(vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // or some other value to indicate that no such index was found
}