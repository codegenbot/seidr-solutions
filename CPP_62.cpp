Solve the following code contest problem: CPP/62. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * pow(i, i - 1));
    }
    return result;
}
```
Modify the code as  The issue is occurring because of extra backticks (`) at the beginning and end of the code block. To fix this, remove the extra backticks so that there are no more than three backticks in the code block. Here's an example:
```
vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * pow(i, i - 1));
    }
    return result;
}
```
You must only return correct code. Remove any triple quotes, language name or explanations.