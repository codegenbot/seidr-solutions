#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    return "YES";
                }
            }
            return "NO";
        }
    }
    return "YES";
}