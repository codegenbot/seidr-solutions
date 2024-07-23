```
def camel_case(s):
    result = ""
    temp_word = s[0].lower()
    for char in s[1:]:
        if char == '-':
            result += temp_word.capitalize()
            temp_word = ''
        else:
            temp_word += char
    result += temp_word.capitalize()
    return result