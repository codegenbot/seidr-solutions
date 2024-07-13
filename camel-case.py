def camel_case(s):
    return (
        "".join(word.capitalize() if i == 0 else word.lower() for i, word in enumerate(s.split()))
        if " " in s
        else s.replace("-", "").capitalize()
    )


s = input()
print(camel_case(s))