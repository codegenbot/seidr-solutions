```cpp
#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(abs(num) > 10 && (num % 10) % 2 != 0 && (abs(num) / 10) % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    assert(specialFilter({}) == 0);
    assert(specialFilter({1, 2, 3, 4, 5}) == 0);
    assert(specialFilter({11, 12, 13, 14, 15}) == 0);
    assert(specialFilter({16, 17, 18, 19, 20}) == 0);
    assert(specialFilter({21, 22, 23, 24, 25}) == 0);
    assert(specialFilter({26, 27, 28, 29, 30}) == 0);
    assert(specialFilter({31, 32, 33, 34, 35}) == 0);
    assert(specialFilter({36, 37, 38, 39, 40}) == 0);
    assert(specialFilter({41, 42, 43, 44, 45}) == 0);
    assert(specialFilter({46, 47, 48, 49, 50}) == 0);
    assert(specialFilter({51, 52, 53, 54, 55}) == 0);
    assert(specialFilter({56, 57, 58, 59, 60}) == 0);
    assert(specialFilter({61, 62, 63, 64, 65}) == 0);
    assert(specialFilter({66, 67, 68, 69, 70}) == 0);
    assert(specialFilter({71, 72, 73, 74, 75}) == 0);
    assert(specialFilter({76, 77, 78, 79, 80}) == 0);
    assert(specialFilter({81, 82, 83, 84, 85}) == 0);
    assert(specialFilter({86, 87, 88, 89, 90}) == 0);
    assert(specialFilter({91, 92, 93, 94, 95}) == 0);
    assert(specialFilter({96, 97, 98, 99, 100}) == 0);
    cout << specialFilter({101, 102, 103, 104, 105}) << endl;
    return 0;
}