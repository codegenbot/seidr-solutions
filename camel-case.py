def camel_case(input_string):
    words = input_string.split()
    result = ""
    for word in words:
        if "-" in word:
            result += word.capitalize().replace("-", "")
        else:
            result += word
        if word != words[-1]:
            result += " "
    return result