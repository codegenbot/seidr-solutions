def fuel_cost(arr):
    return sum([i // 3 - 2 for i in arr])


# Read input from user
arr = list(map(int, input().split()))

# Call the function and print the result
result = fuel_cost(arr)
print(result)