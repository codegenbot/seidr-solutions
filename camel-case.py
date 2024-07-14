def kebab_to_camel(s):
    return ' '.join(word.capitalize() for word in s.split('-')) if '-' in s else s

while True:
    try:
        s = input().strip()
        print(kebab_to_camel(s))
    except EOFError:
        break