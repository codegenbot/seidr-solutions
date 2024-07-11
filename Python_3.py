```
def below_zero():
    balance = 0
    while True:
        operation = int(input("Enter an operation (+1 or -1), or 0 to stop: "))
        if operation == 0:
            break
        balance += operation
        if balance < 0:
            return True
    return False