def decode_shift(s):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )


try:
    input_string = input().strip()
    if input_string.islower() and len(input_string) > 0:
        decoded_string = decode_shift(input_string.lower())
        print(decoded_string)
    else:
        print("Please enter a valid lowercase string consisting only of alphabets.")
except EOFError:
    print("Please provide valid input.")