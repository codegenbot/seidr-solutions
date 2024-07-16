```
def fuel_cost():
    vector = list(map(int, input("Enter space-separated integers: ").split()))
    if len(vector) == 0:
        return 0
    return sum((num // 3) - 2 for num in vector)