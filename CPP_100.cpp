#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int count = 1;
    
    while (count <= n) {
        if (count % 2 == 0) {
            pile.push_back(count);
        } else {
            pile.push_back(count + 1);
        }
        count += 2;
    }
    
    return pile;
}