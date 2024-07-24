#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        bool found = false;
        for (int &otherNum : lst2) {
            if (num % 2 != otherNum % 2) {
                swap(num, otherNum);
                found = true;
                break;
            }
        }
        if (!found)
            return "NO";
    }
    if (evenCount == lst1.size())
        return "YES";
    return "NO";
}