```
def fuel_cost():
    """Solve the fuel-cost problem"""
    arr = list(map(int, input().split()))
    return sum((i-2)//3 for i in arr)