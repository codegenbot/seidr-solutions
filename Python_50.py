def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.isalpha() and ch.islower()])

try:
    input_str = input("Enter the string to decode: ")
    if input_str.isalpha() and input_str.islower():
        result = decode_shift(input_str)
        print(result)
    else:
        print("Invalid input. Please enter a valid string consisting only of lowercase alphabets.")
except:
    print("Invalid input. Please enter a valid string.")