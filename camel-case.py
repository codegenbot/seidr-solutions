def camel_case(s):
    """Take a string in kebab-case and convert all of the words to camelCase.
Each group of words to convert is delimited by "-", and each grouping is separated by a space."""
    words = s.replace('-', ' ').split()
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(words))

print(camel_case(input()))