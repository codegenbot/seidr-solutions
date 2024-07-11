```
while True:
    try:
        expression = input("Enter an expression (or 'done' if finished): ")
        if expression.lower() == "done":
            break
        elif not isinstance(expression, str):
            print("Expected a string as the input. Please enter again.")
        else:
            print("Correct bracketing!" if correct_bracketing(expression) else "Incorrect bracketing. Try again.")
    except Exception as e:
        print(f"Error occurred: {e}")
        raise