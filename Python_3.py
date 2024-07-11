```
from typing import List

def below_zero() -> bool:
    operations = []  
    while True: 
        operation = input("Enter an operation (or 'done' if you're finished): ")
        
        if operation.lower() == 'done':
            break
        
        try:
            operation = int(operation)  
            operations.append(operation)  
        except ValueError: 
            continue
    
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False

print(below_zero())