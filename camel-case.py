def camel_case(s):
    if ' ' in s:
        words = s.split()
        return ''.join(word.capitalize() if i == 0 else word[0].upper() + word[1:].lower() for i, word in enumerate(words))
    else:
        return s.replace('-', '').capitalize()