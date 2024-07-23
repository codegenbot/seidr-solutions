```
def below_zero():
    try:
        operations = input("Enter a list of integers (space-separated): ").split()
        operations = [int(i) for i in operations]
        balance = 0
        for op in operations:
            balance += op
            if balance < 0:
                return True
        return False
    except ValueError:
        print("Invalid input. Please enter a list of integers (space-separated).")
        return None