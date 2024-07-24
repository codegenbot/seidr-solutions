Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        x = int(input()) // 3 - 2
        total += x
    return total