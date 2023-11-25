def fuel_cost(arr):
    return sum([max(0, num // 3 - 2) for num in arr])


# Read input from user
arr = []
while True:
    try:
        num = int(input())
        arr.append(num)
    except EOFError:
        break

# Call the function and print the result
result = fuel_cost(arr)
print(result)