def camel_case(s):
    return "".join(word.capitalize() if i > 0 and s.index(word) > s.index(words[i-1]) else word for i, word in enumerate(s.split('-')))