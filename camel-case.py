def camel_case(s):
    return "".join(word.capitalize() if i == 0 else first_word + word.capitalize().lstrip(" ") for i, (first_word, word) in enumerate(map(str.split, s.replace("-", " ").split())))