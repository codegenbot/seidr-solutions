def convert_case(s):
    return s.swapcase()

try:
    user_input = input("Enter a string: ").strip()
    print(convert_case(user_input))
except:
    print("Invalid input. Please enter a valid string.")