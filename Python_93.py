[PYTHON]
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
    return encoded_message
[/PYTHON]
[TESTS]
# Test case 1:
assert encode("Hello World") == "Jgnnq Yqtnf"
# Test case 2:
assert encode("Python is a popular programming language.") == "Qber gur ahzore bs yrggref yvxr gur genva."
# Test case 3:
assert encode("The quick brown fox jumps over the lazy dog.") == "Gur dhvpx oebja sbk whzcf bire gur ynml qbt."
[/TESTS]
