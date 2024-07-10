```"
def fuel_cost():
    arr = list(map(int, input().split()))
    return sum((i//3-1) for i in arr)