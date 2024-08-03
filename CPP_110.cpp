#include <vector>
#include <string>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}