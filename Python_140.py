
# This program replaces all whitespace with hyphens in a given string
import re
def fix_spaces(text):
    text = input("Enter a string: ")
    return re.sub(r"\s+", "-", text)

result = fix_spaces("hello world")
print(result) # Should print "hello-world"