```
lst = list(map(int, input("Enter space-separated integers: ").split()))
print(sum(i for i in lst[1::2] if i % 2 != 0))