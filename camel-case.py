def camel_case(s):
    return "".join(word.capitalize() for word in s.split("-")) + " ".join(
        part.strip().capitalize() for part in s.split()
    )


print(camel_case(input()))