def camel_case(input_str):
    output_str = input_str.replace("-", " ").capitalize()
    return "".join(word[0].upper() + word[1:] for word in output_str.split())