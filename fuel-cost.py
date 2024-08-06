Here is the solution:

def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        num = int(input())
        result += (num // 3) - 2
    print(result)