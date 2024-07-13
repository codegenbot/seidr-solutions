def fuel_cost(arr):
    return sum((num // 3 - 2) for num in arr)


# Read input from user
arr = list(map(int, input().split()))

# Call the function and print the result
print(fuel_cost(arr))