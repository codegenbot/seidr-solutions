def camel_case(input_string):
    words = input_string.split()
    result = ""
    for word in words:
        if "-" in word:
            temp = word.replace("-", "").capitalize()
            result += temp
        else:
            result += word + " "
    return result.strip()