#include<string>
std::string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    int evenCount = lst2.size() - oddCount;
    if (oddCount > evenCount)
        return "NO";
    else
        return "YES";
}