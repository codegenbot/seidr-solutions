```cpp
string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    while(true) {
        bool swapped = false;
        for (int &num1 : lst1) {
            bool found = false;
            for (int &num2 : lst2) {
                if (num1 % 2 != num2 % 2) {
                    swap(num1, num2);
                    swapped = true;
                    break;
                }
            }
        }
        if (!swapped)
            break;
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}