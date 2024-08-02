Here is the Python solution for the problem:

def fuel_cost():
    n = int(input())
    total_sum = 0
    for _ in range(n):
        num = int(input())
        result = (num // 3) - 2
        if result < 0:
            result = 0
        total_sum += result
    return total_sum