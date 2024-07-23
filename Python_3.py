```
def below_zero():
    balance = 0
    while True:
        operation = int(input("Enter an integer (+/-): "))
        balance += operation
        if balance < 0:
            print(True)
            break
        elif operation == 0:
            print(False)
            break