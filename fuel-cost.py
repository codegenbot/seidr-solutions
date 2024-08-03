Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for i in range(n):
        x = int(input())
        result = math.floor(x / 3) - 2
        if result < 0:
            result = 0
        total += result
    return total