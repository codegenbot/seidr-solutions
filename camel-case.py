def camel_case(input_string):
    result = ""
    for word in input_string.split():
        if len(word) > 1 and word[0].islower() and word[1] == "-":
            result += word[7:].capitalize()
        else:
            result += word.capitalize()
    return result