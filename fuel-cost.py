```
def solve():
    return sum(((x-1)//3)*-1 - 2 for x in map(int, input().split()))