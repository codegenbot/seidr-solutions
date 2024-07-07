```cpp
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> set1(l1.begin(), l1.end());
    set<int> set2(l2.begin(), l2.end());
    vector<int> intersection;
    for (int i = 0; i < set1.size(); i++) {
        int element = *set1.begin() + i;
        if(set2.find(element) != set2.end()){
            intersection.push_back(element);
        }
    }
    return intersection;
}

int main() {
    vector<int> l1;
    int n1;
    cout << "Enter the number of elements in list 1: ";
    cin >> n1;
    for(int i = 0; i < n1; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l1.push_back(x);
    }

    vector<int> l2;
    int n2;
    cout << "Enter the number of elements in list 2: ";
    cin >> n2;
    for(int i = 0; i < n2; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l2.push_back(x);
    }

    if(same(l1, l2)) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "The two lists are different." << endl;
    }

    vector<int> intersection = common(l1, l2);
    if(intersection.size() != 0) {
        for(int i = 0; i < intersection.size(); i++) {
            cout << intersection[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements." << endl;
    }

    return 0;
}