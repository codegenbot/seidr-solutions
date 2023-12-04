```
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> rescale_to_unit(vector<float> numbers){ 
    float min = numbers[0];
    float max = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min) min = numbers[i];
        else if (numbers[i] > max) max = numbers[i];
    }
    vector<float> result(numbers.size());
    for (int i = 0; i < numbers.size(); i++) {
        result[i] = (numbers[i] - min) / (max - min);
    }
    return result;
}
```
