import re


def indices_of_substring():
    # Read input from the user
    text = input("Enter the text string: ")
    target = input("Enter the target string: ")

    # Find the indices at which the target appears in the text
    matches = re.finditer(target, text)
    return [match.start() for match in matches]