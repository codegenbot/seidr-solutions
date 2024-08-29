def camel_case(s):
    return "".join(word.capitalize() for word in s.split() if word)


while True:
    s = input()
    print(camel_case(s))