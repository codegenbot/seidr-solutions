def below_zero(operations):
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


# Prompt the user for input
operations = list(map(int, input().split()))

# Call the below_zero function with the user input
result = below_zero(operations)

# Print the result
print(result)