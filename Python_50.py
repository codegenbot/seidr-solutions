def decode_line(line: str) -> str:
    # Add your code to decode the input line here
    pass

while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. _" for char in input_string):
        print(decode_line(input_string))
        break
    print("Input string must contain only letters, digits, '_', '.', and spaces. Please try again.")