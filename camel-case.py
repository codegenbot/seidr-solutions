
#<<REPL>>
import re
def camel_case(string):
    # Input is kebab-case or space separated words.
    # Output should be camelCase
    new_s = string[0].lower()
    for s in string[1:]:
        if s == "-" or s == " ":
            continue
        elif s.isupper():
            new_s += s
        else:
            new_s += s.upper()
    return new_s
#<<REPL>>
# Solution is available in the other code file
