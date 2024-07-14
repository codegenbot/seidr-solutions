#include <vector>
using namespace std;

int main() {
    vector<int> leaders = leaders(vector<int>{1, 3, 4, 2});
    for (int i : leaders) {
        cout << i << " ";
    }
    return 0;
}