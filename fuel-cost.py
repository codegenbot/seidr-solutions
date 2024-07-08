```
def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        x = int(input())
        x = (x//3) - 2
        if x < 0:
            x = 0
        result += x
    print(result)