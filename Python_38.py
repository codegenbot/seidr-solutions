input_str = input("Enter a string: ").lower().strip()
invalid_input_message = "Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters."
while (len(input_str) % 3 != 0) or (not input_str.isalnum()) or (len(input_str) == 0):
    print(invalid_input_message)
    input_str = input("Enter a string: ").lower().strip()