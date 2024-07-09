operations = list(map(int, input().split())) 
balance = 0
for operation in operations:
    balance += operation
    if balance < 0:
        print(True)
        break
else:
    print(False)