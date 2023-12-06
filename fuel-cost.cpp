```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    vector<int> vec = {18, 1684, 7935, 8896, 6458, 5343, 9088, 7023, 471, 1989, 8864, 6673, 2425, 1489, 3041, 7182, 3934, 5727, 9690};
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = round(vec[i] / 3) - 2;
        sum += vec[i];
    }
    cout << "The sum of the new integers in the vector is: " << sum << endl;
}
```
Note that I have removed the template literals and replaced them with regular string literals, as they are not allowed in C++. Additionally, I have declared the `vec` and `sum` variables before their use in the `for` loops.