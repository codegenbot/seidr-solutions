Here is the completed code:

```cpp
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    
    while (current > 0) {
        pile.push_back(current);
        if (current % 2 == 1) {
            current += 2;
        } else {
            current += 1;
        }
    }
    
    return pile;
}