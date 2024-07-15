```
def camel_case(s):
    return "".join(word.capitalize() if i == 0 else first_word + word[0].upper() for i, (first_word, word) in enumerate(map(lambda x: x.split("-"), s.split("-"))))