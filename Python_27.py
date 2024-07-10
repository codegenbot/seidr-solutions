def convert_case(s):
    return s.swapcase()

try:
    user_input = raw_input("Enter a string: ").strip()
    print(convert_case(user_input))
except Exception as e:
    print("Invalid input. Please enter a valid string.")