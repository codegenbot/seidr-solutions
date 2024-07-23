```
def fuel_cost(lst):
    return sum((int(i) // 3 - 2) for i in lst)

print(fuel_cost(input("Enter space-separated positive integers:").split()))