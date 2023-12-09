[PYTHON]
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    consonants = [char for char in string.ascii_lowercase if char not in vowels]
    encoding_map = {char: chr(ord(char) + 2) for char in vowels}
    encoding_map.update({char: char.swapcase() for char in consonants})
    return message.translate(encoding_map)
[/PYTHON]
[TESTS]
# Test case 1:
assert encode("hello") == "jgnnq"
# Test case 2:
assert encode("python") == "QFNNOC"
# Test case 3:
assert encode("9368705") == "9368705"
[/TESTS]
