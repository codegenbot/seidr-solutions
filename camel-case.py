```
def kebab_to_camel(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.split('-'))).replace('-', ' ').strip().title()

while True:
    s = input()
    print(kebab_to_camel(s))