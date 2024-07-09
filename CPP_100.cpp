#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    
    for (int i = 1; ; i++) {
        pile.push_back(current);
        if (current % 2 == 0) {
            current++;
        } else {
            current += 2;
        }
        
        if (pile.size() >= i + 1) break;
    }
    
    return pile;
}