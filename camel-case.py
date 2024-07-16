```
def camel_case(input_str):
    return (
        " ".join(word.lower() + word[1:].upper() if i > 0 else word.lower().capitalize() for i, word in enumerate(input_str.split("-")))
        if "-" in input_str
        else input_str.title()
    )


input_str = input()
print(camel_case(input_str))