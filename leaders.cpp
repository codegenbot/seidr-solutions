#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 3, 4}; 
    vector<int> leadersResult = leaders(arr);
    
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    
    return 0; 
}