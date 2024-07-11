```
while True:
    operations = input("Enter space separated operations (e.g., -5 +3 -2): ")
    operations = [op for op in operations.split() if op != '']
    if len(operations) == 0:  
        print("Invalid input. Try again!")
    else:
        break
print(below_zero(operations))