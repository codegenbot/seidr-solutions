def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

# Get input from the user
operations = list(map(int, input().split()))

# Call the function with the input list
result = below_zero(operations)

print(result)