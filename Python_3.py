```
def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == "+":
            try:
                balance += int(operation[1:])
            except ValueError:
                print("Invalid input. Please enter a valid number.")
        elif operation[0] == "-":
            try:
                balance -= int(operation[1:])
            except ValueError:
                print("Invalid input. Please enter a valid number.")
    return balance < 0

ops = []
while True:
    op = input()
    if op.strip() == "":
        break
    ops.append(op)
print(below_zero(ops))