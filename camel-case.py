def camel_case(s):
    return "".join(word.capitalize() for word in s.split() if word) + "".join(
        word[0].upper() + word[1:] for word in s.split("-") if len(word) > 1
    )


s = input()
print(camel_case(s))