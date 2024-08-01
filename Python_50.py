def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from the user
while True:
    input_string = input("Enter the string to decode: ")
    if input_string.islower() and input_string.isalpha():
        break
    else:
        print("Please enter a string of lowercase letters only.")

# Call the function with the input string and print the result
print(decode_shift(input_string))