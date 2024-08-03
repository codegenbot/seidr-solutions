```
def solution():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    return sum(i for i in lst[1::2] if i % 2 != 0)