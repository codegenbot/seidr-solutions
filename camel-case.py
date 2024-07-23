```
def camel_case(s):
    s = s.replace("-", " ")
    return s[0].upper() + "".join(word.capitalize() for word in s.split()[1:]) + "".join(
        word[0].upper() + word[1:] for word in s.split("-") if len(word) > 1
    )


s = input()
print(camel_case(s))