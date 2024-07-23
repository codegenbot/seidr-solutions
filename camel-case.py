```Python
def camel_case(s):
    s = s.replace("-", " ")
    return "".join(word.capitalize() for word in s.split() if word) 

s = input()
print(camel_case(s))