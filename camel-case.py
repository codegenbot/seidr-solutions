def camel_case(input_str):
    output = ""
    for word in input_str.split():
        if "-" in word:
            output += word[0].upper() + word[1:].lower()
        else:
            if output:
                output += " "
            output += word.capitalize()
    return output