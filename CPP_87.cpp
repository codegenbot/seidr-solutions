#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> lst = {{1, 2}, {3, 4}};
    int x = 2;
    vector<vector<int>> result = get_row(lst, x);
    for (auto row : result) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
```