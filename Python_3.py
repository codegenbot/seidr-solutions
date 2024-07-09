operations = list(map(int, input().split()))
balance = 0
if any((balance := balance + op) < 0 for op in operations):
    print(True)
else:
    print(False)