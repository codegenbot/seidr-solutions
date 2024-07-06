def camel_case(s):
    words = s.replace('-', ' ').split()
    return words[0] + ''.join(word.capitalize() for i, word in enumerate(words) if i > 0)