```
lst = [int(i) for i in input("Enter elements separated by space: ").split()]
if len(lst) < 2:
    print(None)
else:
    lst.sort()
    print((lst[-1] - lst[0]) * 2)