#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            for (int other_num : lst2) {
                if (other_num % 2 == 0) {
                    return "YES";
                }
            }
            return "NO";
        }
    }
    return "YES";
}