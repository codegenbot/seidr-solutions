import re


def indices_of_substring(text, target):
    pattern = r"(?=(%s))" % re.escape(target)
    return [match.start() for match in re.finditer(pattern, text)]


text = "abcdefg"
target = "cd"
print(indices_of_substring(text, target))  # Output: [2]

text = "abcdecdcde"
target = "cd"
print(indices_of_substring(text, target))  # Output: [2, 5]