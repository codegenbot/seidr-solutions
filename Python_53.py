```
def add(x: int, y: int):
    while True:
        x = float(input("Enter a number for x: "))
        if not isinstance(x, (int, float)):
            print("Both inputs must be numbers")
            continue
        while True:
            y = float(input("Enter a number for y: "))
            if not isinstance(y, (int, float)):
                print("Both inputs must be numbers")
            else:
                break
        result = x + y
        while True:
            user_input = input(f"Result: {result}. Do you want to continue? (yes/no): ")
            if user_input.lower() == 'no':
                return result