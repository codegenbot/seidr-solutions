#include <vector>
#include <utility>

using namespace std;

bool issame(vector<int> a1, vector<int> a2) {
    if (a1.size() != a2.size()) 
        return false;
    
    for (int i = 0; i < a1.size(); i++) {
        if (a1[i] != a2[i]) 
            return false;
    }
    
    return true;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    } else {
        result.push_back({0, -1}); // or any other default value
    }

    return result;
}

int main() {
    vector<int> a = {2, 4, 5};
    vector<int> b = {2, 4, 6};
    
    if (issame(a, b))
        cout << "Vector a and b are same" << endl;
    else
        cout << "Vectors a and b are not the same" << endl;
}