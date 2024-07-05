def camel_case(input_str):
    return "".join(word[0].lower() + word[1:].capitalize() if i > 0 else word for i, word in enumerate(input_str.split("-")))

input_str = input()
print(camel_case(input_str))