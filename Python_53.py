def add() -> int:
    x = int(input("Enter first number: ") or 0)
    y = int(input("Enter second number: ") or 0)
    
    if not x or not y:
        return "Invalid input"
    
    return x + y