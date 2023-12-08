```
def separate_paren_groups(paren_string):
    paren_string = input()
    return re.findall(r'\([^()]*\)', paren_string)
```