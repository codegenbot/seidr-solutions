print("Enter digits (or 'stop' to finish).")
result = []
while True:
    user_input = input("Please enter a digit: ")
    if user_input.lower() == 'stop':
        break
    try:
        int(user_input)
        result.append(user_input)
    except ValueError:
        pass