def flip_case(s):
    return s.swapcase()


try:
    user_input = input("Enter a string: ").strip()
    print(flip_case(user_input))
except Exception as e:
    print("Invalid input. Please enter a valid string.")