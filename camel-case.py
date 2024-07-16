def camel_case(input_str):
    words = input_str.split(" ")
    result = ""
    for word in words:
        if word:
            if not result:
                result = word[0].upper()
            else:
                result += word.capitalize()
    return result