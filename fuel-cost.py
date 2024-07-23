```
def fuel_cost(numbers):
    return sum((int(n) // 3 - 2 for n in numbers))

print(fuel_cost(input("Enter space-separated positive integers:").split()))