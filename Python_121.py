```
def solution():
    lst = list(map(int, input().split()))
    return sum(i for i in lst[1::2] if isinstance(i, int) and i % 2 != 0)

print(solution())