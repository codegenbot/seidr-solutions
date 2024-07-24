def convert_to_camelcase(s):
    return ''.join(word.capitalize() for word in s.split()) if '-' in s else s.capitalize()

while True:
    try:
        user_input = input().strip()
        print(convert_to_camelcase(user_input))
    except EOFError:
        break