def below_zero(operations):
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


operations = [1, -2, 3, -4, 5]
result = below_zero(operations)
print(result)