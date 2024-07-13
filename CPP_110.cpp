#include <vector>
#include <string>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int i : lst1) {
        if (i % 2 == 0)
            evenCount++;
    }
    
    for (int i : lst1) {
        if (i % 2 != 0 && evenCount > 0) {
            vector<int>::iterator it = find(lst2.begin(), lst2.end(), i);
            if (it != lst2.end()) {
                lst2.erase(it);
                evenCount--;
            } else
                return "NO";
        }
    }
    
    if (evenCount == 0)
        return "YES";
    else
        return "NO";
}