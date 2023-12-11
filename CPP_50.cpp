[PYTHON]
def encode_shift(s):
    # takes as input string and returns encoded string
    for i in range(len(s)):
        c = s[i]
        if c >= 'a' and c <= 'z':
            c += 5
            if c > 'z':
                c -= 26
        elif c >= 'A' and c <= 'Z':
            c += 5
            if c > 'Z':
                c -= 26
        s[i] = c
    return s

def decode_shift(s):
    # takes as input string encoded with encode_shift function. Returns decoded string.
    for i in range(len(s)):
        c = s[i]
        if c >= 'a' and c <= 'z':
            c -= 5
            if c < 'a':
                c += 26
        elif c >= 'A' and c <= 'Z':
            c -= 5
            if c < 'A':
                c += 26
        s[i] = c
    return s

def main():
    # test the encode_shift and decode_shift functions
    str = "hello"
    print("Encoded: ", encode_shift(str))
    print("Decoded: ", decode_shift(encode_shift(str)))

main()
[/PYTHON]
[TESTS]
# Test case 1:
# Test the encoding and decoding of a string.
# The encoded string should be "mjqqt" and the decoded string should be "hello".
input_string = "hello"
encoded_string = encode_shift(input_string)
decoded_string = decode_shift(encoded_string)
assert encoded_string == "mjqqt", "The encoded string is incorrect."
assert decoded_string == "hello", "The decoded string is incorrect."
# Test case 2:
# Test the encoding and decoding of a string with special characters.
# The encoded string should be "mjqqt!@#$%^&*()_+-=" and the decoded string should be "hello!@#$%^&*()_+-=".
input_string = "hello!@#$%^&*()_+-="
encoded_string = encode_shift(input_string)
decoded_string = decode_shift(encoded_string)
assert encoded_string == "mjqqt!@#$%^&*()_+-=", "The encoded string is incorrect."
assert decoded_string == "hello!@#$%^&*()_+-=", "The decoded string is incorrect."
[/TESTS]
