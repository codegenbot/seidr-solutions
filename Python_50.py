input_string = input("Enter the string to decode: ").strip()
if not all(char.islower() or char.isspace() or char.isdigit() for char in input_string): 
    print("Input string must contain only lowercase alphabets, spaces, and digits.")
else:
    # Add your decoding logic here
    pass