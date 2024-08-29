```
def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.replace('-', ' ').split())