```''' 
def fuel_cost():
    arr = list(map(int, input().split()))
    return sum(((n-2)//3) for n in arr)