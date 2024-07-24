```
def camel_case(input_str):
    result = ''
    for word in input_str.split():
        if not word.startswith('-'):
            if result:
                result += word.capitalize()
            else:
                result = word
        elif '-' in word:
            next_word = word[1:].capitalize()
            if result:
                result += ' ' + next_word
            else:
                result = next_word
    return result