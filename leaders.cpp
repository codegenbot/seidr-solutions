#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> leaders_vector;
    int n = arr.size();
    
    if (n == 0) {
        cout << "Array is empty";
        return 1;
    }

    int lastLeader = arr[n-1];
    leaders_vector.push_back(lastLeader);

    for(int i = n-2; i >= 0; --i) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            leaders_vector.push_back(lastLeader);
        }
    }
    
    reverse(leaders_vector.begin(), leaders_vector.end());
    cout << "Leaders are: ";
    for (int i : leaders_vector) {
        cout << i << " ";
    }
    return 0;
}