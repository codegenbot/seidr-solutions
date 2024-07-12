def process_digits():
    result = []
    while True:
        try:
            user_input = int(input("Please enter a digit: "))
            result.append(str(user_input))
        except ValueError:
            user_input = input("Please enter a digit: ")
            if user_input.lower() == 'stop':
                break
            print("Invalid input. Please enter digits or type 'stop' to finish.")
    return result

print("Enter digits (or 'stop' to finish).")
print(process_digits())