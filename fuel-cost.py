def fuel_cost(arr):
    return sum((x // 3) - 2 for x in arr)


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