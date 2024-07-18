def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

operations = [int(x) for x in input().split()]
print(below_zero(operations))