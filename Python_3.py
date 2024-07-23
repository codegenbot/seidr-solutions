```
operations = list(map(int, input("Enter space-separated integers: ").split()))
print(below_zero(operations))
def below_zero(ops):
    balance = 0
    for op in ops:
        balance += op
        if balance < 0:
            return True
    return False