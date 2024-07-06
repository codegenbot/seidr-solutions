```
def camel_case(s):
    return "".join(part.title().replace "-", "") for part in s.split "-")