```
def solve(): 
    return sum(max(1, (int(x)-8)//3) for x in map(int, input().split()))