```
def fuel_cost():
    numbers = list(map(int, input().split(',')))
    return sum((n // 3) - 2 for n in numbers)