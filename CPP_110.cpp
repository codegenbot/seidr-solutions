#include <string>
#include <vector>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    // Add more test cases...
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount == 0) ? "YES" : "NO";
}