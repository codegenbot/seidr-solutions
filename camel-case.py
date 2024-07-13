def camel_case(s):
    return ''.join(word.capitalize() for word in s.split('-'))

print("hello-world -> helloWorld\ninput your string: ")
s = input()
print(camel_case(s))