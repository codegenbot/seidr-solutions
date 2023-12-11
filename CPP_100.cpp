Solve the following code contest problem: CPP/100. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        if (n % 2 == 0) {
            stones--;
        } else {
            stones += 2;
        }
        pile.push_back(stones);
    }
    return pile;
}
```
Modify the code as  The issue is caused by the use of backticks (`) instead of forward slashes (/) for the include statements. Change the backticks to forward slashes, and the errors will be resolved.

Replace:
```
#include <iostream>
#include <vector>
```
with:
```
#include "iostream"
#include "vector"
```.
You must only return correct code. Remove any triple quotes, language name or explanations.