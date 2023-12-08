Solve the following code contest problem: dice-game. Problem description: Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin..
Currently, the code is 
```
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double prob = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return prob;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
```
Modify the code as The issue you're facing is due to the use of backticks (``) at the beginning and end of your code snippet. In C++, backticks are used for various purposes such as delimiting raw string literals, character constants, or template names. However, in this case, they are causing a syntax error because they're not part of a valid construct.

To fix the issue, simply remove the backticks from your code snippet, so it looks like this:
```c++
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double prob = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return prob;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
```.
You must only return correct code. Remove any triple quotes, language name or explanations.