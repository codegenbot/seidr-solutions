def camel_case(s):
    words = s.replace('-', ' ').split()
    return words[0].lower() + ''.join(word.capitalize() for i, word in enumerate(words[1:]) if i > 0)