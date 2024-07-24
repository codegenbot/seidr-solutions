def camel_case(s):
    return ''.join(word.capitalize() if i == 0 else f"{word[0].upper()}{word[1:]}" for i, word in enumerate(s.split()))