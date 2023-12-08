#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{1, 2, 3};
    auto result = cutVector(v);
    cout << "Subvector 1: ";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Subvector 2: ";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    return 0;
}
```
``` 
Modify the code as  The errors are due to invalid backticks ` in the code. To fix them, remove all the backticks from the code and use proper indentation for better readability..
You must only return correct code. Remove any triple quotes, language name or explanations.