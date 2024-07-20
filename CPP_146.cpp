#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(abs(num) > 10 && (num % 10) % 2 != 0 && (abs(num) / 10) % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    int result = specialFilter(vector<int>({1,11,-12,21,-23,32,41,-42,51}));
    cout << "The number of filtered integers is: " << result << endl;
    assert(specialFilter(vector<int>()) == 0);
    return 0;
}