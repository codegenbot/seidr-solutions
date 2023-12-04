
def below_zero(operations):
    balance = 0
    for operation in operations:
        if operation > 0:
            balance += operation
        else:
            balance -= operation
            if balance < 0:
                return True
    return False