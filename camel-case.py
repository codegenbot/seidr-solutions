def camel_case(input_str):
    result = ""
    for word in input_str.split():
        if len(word) > 1:
            result += word[0].upper() + word[1:].lower()
        else:
            result += word
        if word != input_str.split()[-1]:
            result += " "
    return result