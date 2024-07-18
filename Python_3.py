from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False


# Read input one integer at a time and call the function
operations = []
while True:
    try:
        op = int(input())
        operations.append(op)
    except EOFError:  # End of input
        break

result = below_zero(operations)
print(result)