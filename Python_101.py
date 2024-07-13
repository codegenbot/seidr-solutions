import re


def check(func):
    s = input("Enter a string: ")
    output = func(s)
    print(output)


def words_string(s):
    if type(s) != str:
        return "Error: Input must be a string"
    if s is None or not isinstance(s, str) or len(s.strip()) == 0:
        return []
    words = [word.strip().capitalize() for word in re.split(r"\W+", s)]
    if len(words) < 2:
        return "Error: No words found"
    return words


check(words_string)