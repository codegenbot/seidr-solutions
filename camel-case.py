def camel_case(s):
    return "".join(
        word.capitalize() for word in s.split(" " if s.find("-") == -1 else "")
    )


s = input()
print(camel_case(s))