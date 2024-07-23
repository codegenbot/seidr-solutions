def camel_case(s):
    return "".join(word.capitalize() if i == 0 else prev_word + word[0].upper() + word[1:].lower() for i, word in enumerate(s.replace("-", " ").split(), 1))