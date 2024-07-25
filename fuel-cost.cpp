Here is the completed code:

#include <vector>
using namespace std;

int totalFuelCost(vector<int> distances) {
    int total = 0;
    for (int distance : distances) {
        int newDistance = static_cast<int>(distance / 3);
        newDistance -= 2;
        total += newDistance;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> distances(n);
    for (int i = 0; i < n; i++) {
        cin >> distances[i];
    }
    
    cout << totalFuelCost(distances) << endl;
    
    return 0;
}