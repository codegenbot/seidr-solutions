Here's the solution:

def fuel_cost(lst):
    return sum((i//3 - 2) for i in lst)

# Read input from user
n = int(input())
numbers = [int(input()) for _ in range(n)]
print(fuel_cost(numbers))