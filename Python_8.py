print("Enter digits (or 'stop' to finish).")
numbers = []
while True:
    user_input = input("Please enter a digit: ")
    if user_input.lower() == 'stop':
        break
    numbers.append(user_input)