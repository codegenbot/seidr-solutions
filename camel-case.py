def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if output_str and output_str[-1] != " ": 
            output_str += word.replace("-", "").capitalize()[0].upper() + word[1:].lower()
        else:
            output_str += word.replace("-", "").capitalize()
    return output_str