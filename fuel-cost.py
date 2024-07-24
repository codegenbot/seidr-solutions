Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for _ in range(n):
        num = int(input())
        res = (num // 3) - 2
        if res < 0:
            res = 0
        total += res
    print(total)