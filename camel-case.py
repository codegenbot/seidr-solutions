def convert_to_camel_case(input_string):
    if "-" in input_string:
        return "".join(word.capitalize() for word in input_string.split("-"))
    elif " " in input_string:
        return input_string
    else:
        return input_string.title()


if __name__ == "__main__":
    while True:
        user_input = input()
        print(convert_to_camel_case(user_input))