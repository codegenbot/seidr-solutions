def below_zero(operations):
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False


# Read input from user
operations = list(map(int, input().split()))

# Call the function and output the result
print(below_zero(operations))