```
def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        if operation[0] == "+":
            balance += int(operation[1:])
        elif operation[0] == "-":
            balance -= int(operation[1:])
    return balance < 0

ops = []
op = input()
while op:
    ops.append(op.strip())
    while True:
        try:
            op = int(input()) if "+" in op else -int(input())
            break
        except ValueError:
            print("Invalid operation. Please enter a number followed by '+' or '-'.")

print(below_zero(ops))