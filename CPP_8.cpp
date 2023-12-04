
#include <iostream>
using namespace std;

//Complete the following code given the task description and function signature.
int main(){
vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int i : numbers) {
        sum += i;
        product *= i;
    }
    return vector<int>{sum, product};
}

```