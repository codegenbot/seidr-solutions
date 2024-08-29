Here is the Python solution:

def fuel_cost():
    n = int(input())
    total = 0
    for i in range(n):
        num = int(input())
        total += (num // 3) - 2
    return total