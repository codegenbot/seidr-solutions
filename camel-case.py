def camel_case(input_str):
    return "".join(word.capitalize() if i == 0 else word.capitalize().replace(input_str[0], input.title(0).charAt(0)) for i, word in enumerate(input_str.split("-")))


input_str = input()
print(camel_case(input_str))