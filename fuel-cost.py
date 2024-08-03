Here is the solution:

def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        num = int(input())
        temp = (num // 3) - 2
        if temp < 0:
            temp = 0
        result += temp
    return result