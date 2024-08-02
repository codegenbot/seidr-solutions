#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    // Call the function with actual input
    cout << specialFilter({12, 15, 30}) << endl; 
    return 0;
}