input_string = input("Enter the string to decode: ").strip()
if all(char.islower() or char.isspace() or char.isdigit() for char in input_string if char != "."):
    print("Input string is valid.")
else:
    print("Input string must contain only lowercase alphabets, spaces, and digits.")