def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split() if "-" not in word)
        .replace("-", " ")
        .strip()
        .title()
    )


input_str = input()
print(camel_case(input_str))