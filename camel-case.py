def camel_case(input_str):
    words = input_str.replace("-", " ").split()
    result = ""
    for i in range(len(words)):
        if i > 0:
            result += words[i].capitalize()
        else:
            result += words[i]
    return result