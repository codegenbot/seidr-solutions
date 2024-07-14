```
def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) + ' '.join(s.split()[1:])
print(kebab_to_camel(input()))