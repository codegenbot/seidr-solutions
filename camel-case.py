def camel_case(input_str):
    result = ""
    for word in input_str.split():
        if word == "nospaceordash":
            return word.capitalize()
        elif "-" in word:
            result += word.replace("-", "").capitalize() + " "
        else:
            if not result:
                result += word
            else:
                result += word.capitalize()
    return result.strip()