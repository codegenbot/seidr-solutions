```cpp
#include<vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1,2,3,4,5,2,6,7,8,9};
    vector<int> output = remove_duplicates(numbers);
    for(int num : output) {
        cout << num << " ";
    }
    return 0;
}