def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()])

# Read input from the user
input_string = input("Enter the string to decode: ").lower()

# Check if the input contains only lowercase letters
if not input_string.islower():
    print("Please enter a string with lowercase letters only.")
    exit()

# Call the function with the input string and print the result
print(decode_shift(input_string))