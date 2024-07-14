def camel_case(input_str):
    words = input_str.split("-")
    result = ""
    for i in range(len(words)):
        if i > 0:
            result += words[i][0].upper() + words[i][1:].lower()
        else:
            result += words[i]
    return result