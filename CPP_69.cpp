#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int>& lst) {
    int max = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > max)
            max = lst[i];
    }
    return max;
}

int main() {
    vector<int> lst(5); 
    for (int i = 0; i < 5; ++i) { 
        cin >> lst[i]; 
    }
    int result = search(lst);
    cout << "The largest number in the list is: " << result << endl;
    return 0;
}