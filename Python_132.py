
def is_nested(string):
    open_brackets = 0
    nested = False

    for char in string:
        if char == '[':
            open_brackets += 1
        elif char == ']':
            open_brackets -= 1
        if open_brackets < 0:
            return False
        elif open_brackets > 0:
            nested = True

    if open_brackets == 0 and nested == True:
        return True
    else:
        return False


string = '[[]]'
print(is_nested(string))

string = '[[][]]'
print(is_nested(string))

string = '[]'
print(is_nested(string))

string = '[[]]'
print(is_nested(string))
