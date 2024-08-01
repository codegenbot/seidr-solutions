Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        x = int(input())
        total += (x // 3 - 2)
    return total