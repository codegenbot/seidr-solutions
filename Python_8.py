print("Enter your name:")
name = input()

print("Enter digits (or 'stop' to finish).")
def process_digits():
    digits = []
    while True:
        user_input = input()
        if user_input.lower() == 'stop':
            break
        try:
            digit = int(user_input)
            digits.append(digit)
        except ValueError:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
    return sum(digits) if len(digits) > 0 else None

result = process_digits()
print(f"{name}, the sum of your entered digits is {result}.")