```
def camel_case(s):
    words = s.split('-')
    camel_case_string = words[0] + ' '
    for word in words[1:]:
        camel_case_string += word.capitalize() + ' '
    return camel_case_string.strip().replace(' ', ''.join(word.capitalize() for word in s.split('-')))

print("hello-world -> helloWorld\ninput your string: ")
s = input()
print(camel_case(s))