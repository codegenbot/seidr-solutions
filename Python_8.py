print("Enter digits (or 'stop' to finish).")
result = []
while True:
    user_input = input("Please enter a digit: ")
    if user_input.lower() == 'stop':
        break
    result.append(user_input)