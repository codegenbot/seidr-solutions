def camel_case(s):
    return "".join(word.capitalize() if i == 0 else word.capitalize().replace(word[0], word[0].lower()) for i, word in enumerate(s.split("-")))