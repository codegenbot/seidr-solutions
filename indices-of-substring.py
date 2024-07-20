import re
def indices_of_substring():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    result = [m.start() for m in re.finditer(target, text)]
    return result