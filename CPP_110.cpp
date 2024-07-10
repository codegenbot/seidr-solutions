#include <vector>
using namespace std;

int exchange(vector<int> lst1, vector<int> lst2) {
    int count = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1[count], lst2[num2]);
                    found = true;
                    break;
                }
            }
            if (!found) return 0;
            count++;
        }
    }
    return 1;
}