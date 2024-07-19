input_string = input("Enter the string to decode (lowercase alphabets, spaces, and digits only): ").strip().lower()
if not input_string.isalnum():
    print("Input string must contain only lowercase alphabets, spaces, and digits.")
    exit()