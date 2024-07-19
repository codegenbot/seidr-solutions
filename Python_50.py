while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(char.islower() or char.isspace() or char.isdigit() or not char.isalnum() for char in input_string):
        break
    print("Input string must contain only lowercase alphabets, spaces, digits, and special characters.")

# Continue with the rest of your code here