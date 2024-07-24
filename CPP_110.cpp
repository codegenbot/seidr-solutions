```cpp
int evenCount = 0;
for (int num : lst1)
    if (num % 2 == 0)
        evenCount++;
    
int oddCount = lst1.size() - evenCount;
int evenCount2 = 0;
for (int num : lst2)
    if (num % 2 == 0)
        evenCount2++;

return (evenCount == evenCount2) ? "YES" : "NO";