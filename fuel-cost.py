Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        num = int(input())
        result = (num // 3) - 2
        total += max(0, result)
    print(total)