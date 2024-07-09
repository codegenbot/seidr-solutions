```
def camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.split()) if '-' not in input_str else ' '.join((word[0].upper() + word[1:].lower() if i > 0 else word.lower()) for i, word in enumerate(input_str.split('-')))

while True:
    try:
        input_str = input()
        print(camel_case(input_str))
    except EOFError:
        break