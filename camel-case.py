```
def camel_case(s):
    words = s.split('-')
    camel_case_str = words[0].capitalize()
    for word in words[1:]:
        camel_case_str += word.capitalize()
    return camel_case_str

s = input()
print(camel_case(s))