input_str = input("Enter a string: ").lower().strip()
while len(input_str) % 3 != 0 or not input_str.isalnum() or len(input_str) == 0:
    print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters.")
    input_str = input("Enter a string: ").lower().strip()