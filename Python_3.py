operations = input().strip().split()
try:
    operations = list(map(int, operations))
except ValueError:
    print("Input error: Please provide space-separated integer values.")
else:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            print(True)
            break
    else:
        print(False)