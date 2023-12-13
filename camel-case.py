def kebab_to_camel_case(string):
    words = string.replace("-", " ").split()
    return words[0] + ''.join(word.capitalize() for word in words[1:])