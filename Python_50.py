def decode_shift(s):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a" if ch.islower() else "A")) % 26) + ord("a" if ch.islower() else "A")) if ch.isalpha() else ch
            for ch in s
        ]
    )

input_string = input("Enter a string consisting only of alphabets: ").strip()
if input_string.isalpha():
    decoded_string = decode_shift(input_string)
    print(decoded_string)
else:
    print("Please enter a valid string consisting only of alphabets.")