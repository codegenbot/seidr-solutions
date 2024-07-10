```
def fuel_cost():
    arr = list(map(int, input().split()))
    return sum(((i-2) // 3) for i in arr)