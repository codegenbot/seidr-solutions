def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if "-" in word:
            output_str += word.replace("-", "").capitalize()
        else:
            output_str += word.capitalize()
        if not word.startswith(input_str.split()[0]):
            output_str += " "
    return output_str.strip().replace(" ", "")