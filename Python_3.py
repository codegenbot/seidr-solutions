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

def below_zero(lst):
    return [x for x in lst if x < 0]

# Example usage:
# num = get_integer_input("Enter a number")
# print(below_zero(num))