Here is the completed code:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split()) if ' ' in s else s.title()

s = input()
print(kebab_to_camel(s))