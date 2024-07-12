def camel_case(input_str):
    words = input_str.replace("-", " ").split()
    result = words[0]
    for i in range(1, len(words)):
        result += word.capitalize() if i == 1 else word.capitalize().capitalize()
    return result