def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if "-" in word:
            output_str += word.replace("-", "").capitalize()
        else:
            if output_str:
                output_str += word.capitalize()
            else:
                output_str += word
        output_str += " "
    return output_str.strip().replace(" ", "")