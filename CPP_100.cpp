#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int count = 1;
    
    while (count <= n) {
        if (n % 2 == 0) { // even number of stones
            pile.push_back(count + 1);
            count += 2;
        } else { // odd number of stones
            pile.push_back(count);
            count += 1;
        }
    }
    
    return pile;
}