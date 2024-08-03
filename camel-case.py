def camel_case(s):
    return "".join(
        word.capitalize() for word in s.split() if "-" not in word
    ) + " ".join(part.title() for part in s.split("-") if len(part) > 1)


input_str = input()
print(camel_case(input_str))