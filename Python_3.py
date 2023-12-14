import sys

def below_zero(operations):
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = [int(arg) for arg in sys.argv[1:]]
print(str(below_zero(operations)))