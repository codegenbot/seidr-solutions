def get_integer_input(prompt):
    while True:
        try:
            num = input(prompt + " (1, 2, or 3): ")
            if num == '':
                print("Invalid input. Please enter a valid integer (1, 2, or 3).")
                continue
            num = int(num)
            if num in [1, 2, 3]:
                return num
            print("Invalid input. Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

def below_zero(x):
    return any(num < 0 for num in x)

# Example usage:
# num = get_integer_input("Enter a number")
# print(below_zero([1, -2, 2, -2, 5, -5, 4, -4]))