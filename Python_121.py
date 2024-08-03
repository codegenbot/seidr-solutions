```
def solution():
    n = int(input("Enter number of elements: "))
    lst = list(map(int, input("Enter {} elements separated by space: ".format(n)).split()))
    return sum(i for i in lst[1::2] if i % 2 != 0)