print("Enter digits (or 'stop' to finish).")


def process_digits():
    result = []
    while True:
        user_input = input().strip()
        if user_input.lower() == "stop":
            break
        try:
            num = int(user_input)
            result.append(num)
        except ValueError:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
    return sum(result) if len(result) > 0 else "No digits entered."


print(process_digits())