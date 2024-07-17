```
def convert_to_camelcase(s):
    s = s.replace("-", " ").replace(" ", "")
    return ''.join(word.capitalize() for word in s.split()) if len(s) > 0 else ''

while True:
    try:
        s = input()
        print(convert_to_camelcase(s))
    except EOFError:
        break