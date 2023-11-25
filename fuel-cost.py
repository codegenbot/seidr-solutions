def fuel_cost(arr):
    return sum((x // 3) - 2 for x in arr)


# Read input from user
arr = []
for _ in range(2):
    arr.append(int(input()))

# Call the function and print the result
result = fuel_cost(arr)
print(result)