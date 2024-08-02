Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        num = int(input())
        total += (num // 3) - 2
    print(total)