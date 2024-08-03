```
def solution():
    n = int(input("Enter number of elements in list: "))
    lst = list(map(int, input("Enter {} numbers separated by space: ".format(n)).split()))
    return sum(i for i in lst[1::2] if i % 2 != 0)