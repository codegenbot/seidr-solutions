#include <string>
#include <cassert>
#include <vector>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    // Sample test case
    vector<int> lst1 = {1, 2, 3};
    vector<int> lst2 = {4, 5, 6};
    assert(exchange(lst1, lst2) == "YES");
    
    return 0;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int count = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            count++;
        }
    }
    if (count == 0) {
        return "YES";
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 == 0) {
            count--;
        }
    }
    if (count <= 0) {
        return "YES";
    }
    return "NO";
}