```
#include <iostream>
#include <vector>
using namespace std;
vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}
int main(){
    vector<int> numbers = {1,2,3};
    int delimeter = 4;
    vector<int> result = intersperse(numbers, delimeter);
    for (auto x : result){
        cout << x << " ";
    }
}
```