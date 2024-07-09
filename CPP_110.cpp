#include <string>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount > 0) ? "NO" : "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}