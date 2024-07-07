#include <string>

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return to_string(oddCount == 0 ? "The lists are even" : "The lists have at least one odd number");
}