Here is the completed code:

```cpp
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    
    while (stones > 0) {
        if (n % 2 == 1) {
            pile.push_back(2 * stones + 1);
        } else {
            pile.push_back(2 * stones);
        }
        n--;
        stones /= 2;
    }
    
    return pile;
}