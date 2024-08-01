```
def kebab_to_camel(s):
    s = s.replace("-", " ").replace(" ", "")
    return ''.join(x.title() for x in s.split())

print(kebab_to_camel(input()))