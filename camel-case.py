```
def camel_case(s):
    return s.replace("-", " ").replace(" ", lambda x: x.group().capitalize()) + " "

print(camel_case(input()))