def kebab_to_camel(s):
    return (
        "".join(word.capitalize() for word in s.split(" ") if s.count("-") > 0)
        .replace("-", " ")
        .strip()
        .replace(
            " ", "".join(word.capitalize() for word in s.split(" ") if s.count("-") > 0)
        )
        .camelCase
    )


input_str = input()
print(kebab_to_camel(input_str))