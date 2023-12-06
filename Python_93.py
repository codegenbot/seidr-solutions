[PYTHON]
def encode(message):
    encoded = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded += chr(ord('A') + (ord(char) - ord('a')) % 26)
            else:
                encoded += chr(ord('a') + (ord(char) - ord('A')) % 26)
        elif char.isspace() or char.ispunct():
            encoded += char
    return encoded
[/PYTHON]
[TESTS]
# Test case 1:
assert encode("") == ""
# Test case 2:
assert encode("hello") == "HELLO"
# Test case 3:
assert encode("Hello World") == "HELLO WORLD"
# Test case 4:
assert encode("The quick brown fox jumps over the lazy dog") == "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG"
# Test case 5:
assert encode("Python is a popular programming language.") == "PYTHON IS A POPULAR PROGRAMMING LANGUAGE."
[/TESTS]
