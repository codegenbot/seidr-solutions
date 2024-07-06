```
def fix_spaces(text):
    result = ''
    prev_was_space = True
    for char in text:
        if char.isspace():
            if not prev_was_space:
                result += '-'
            else:
                result += '_'
            prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result

text = input("Please enter your text: ")
print(fix_spaces(text))