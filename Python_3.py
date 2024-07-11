def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == "+":
            balance += int(operation[1:])
        elif operation[0] == "-":
            balance -= int(operation[1:])
    return balance < 0


ops = []
while True:
    op = input().strip()
    if op == "":
        break
    ops.append(op)
    amount = input().strip()
    if op == "+":
        ops[-1] += amount
    else:
        ops[-1] += "-" + amount

print(below_zero(ops))