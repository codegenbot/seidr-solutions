input_string = input("Enter the string to decode: ").strip().lower()
if not all(char.islower() or char.isspace() for char in input_string):
    print("Input string must contain only lowercase alphabets and spaces.")
    exit()