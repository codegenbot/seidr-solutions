[PYTHON]
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char) + 2 - ord('A')) % 26 + ord('a'))
            else:
                encoded_char = chr((ord(char) + 2 - ord('a')) % 26 + ord('A'))
            encoded_message += encoded_char
        else:
            if char.isupper():
                return char
            else:
                return char.lower()
    return encoded_message
[/PYTHON]
[TESTS]
# Test case 1:
assert encode("Hello World") == "Jgnnq Yqtnf"
# Test case 2:
assert encode("hello world") == "jgnnq yqtnf"
# Test case 3:
assert encode("HELLO WORLD") == "JGNNS YQTNF"
[/TESTS]
