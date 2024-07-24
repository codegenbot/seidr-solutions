result = lambda operations: any(
    (sum(operations[: i + 1]) < 0) for i in range(len(operations))
)

# Read input from the user
operations = list(map(int, input().split()))

# Call the function with the input list
print(result(operations))