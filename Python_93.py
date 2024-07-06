
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('A'))
            else:
                encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message

# Test case 1:
assert encode("Hello, World!") == "Jgnnq, Yrff!"

# Test case 2:
assert encode("Python is a great programming language!") == "Ruby is a great programming language!"

# Test case 3:
assert encode("The quick brown fox jumps over the lazy dog.") == "Vhku ickq brwn fx jmps vr th lzy dg."