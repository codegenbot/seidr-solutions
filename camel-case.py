def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if "-" in word:
            output_str += word.replace("-", "").capitalize()
        else:
            output_str += word.capitalize()
        if word != input_str.split()[-1]:
            output_str += " "
    return output_str.strip().replace(" ", "")