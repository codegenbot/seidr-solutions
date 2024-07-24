def fuel_cost(arr):
    return sum((x // 3) - 2 for x in arr)


# Read input from user
arr = list(map(int, input().split()))

# Output the result
print(fuel_cost(arr))