import math

def fuel_cost(arr):
    return sum([math.floor(x/3) - 2 for x in arr])

# Read input from user
arr = list(map(int, input().split()))

# Call the function and print the result
print(fuel_cost(arr))