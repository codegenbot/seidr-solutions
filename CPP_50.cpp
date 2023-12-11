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
    print("Encoded:", encode_shift(str))
    print("Decoded:", decode_shift(encode_shift(str)))

main()
[/PYTHON]
[TESTS]
# Test case 1:
# Test encoding and decoding of a string
str = "hello"
assert encode_shift(str) == "mjqqt"
assert decode_shift(encode_shift(str)) == str
# Test case 2:
# Test encoding and decoding of a string with spaces
str = "hello world"
assert encode_shift(str) == "mjqqt btwqi"
assert decode_shift(encode_shift(str)) == str
# Test case 3:
# Test encoding and decoding of a string with punctuation
str = "hello, world!"
assert encode_shift(str) == "mjqqt, btwqi!"
assert decode_shift(encode_shift(str)) == str
# Test case 4:
# Test encoding and decoding of a string with special characters
str = "hello, world!\n"
assert encode_shift(str) == "mjqqt, btwqi!\n"
assert decode_shift(encode_shift(str)) == str
[/TESTS]
