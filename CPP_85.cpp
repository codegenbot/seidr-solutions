```cpp
#include <vector>
#include <iostream>

using namespace std;

int add(vector<int> lst) {
    int sum = 0;
    for(int i=1; i<lst.size(); i++){
        if(i%2!=0) sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> lst;
    cout << "Enter elements (space-separated): ";
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    cout << "Sum of odd-indexed elements: " << add(lst) << endl;
    return 0;
}