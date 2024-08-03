def camel_case(input_str):
    output_str = ""
    for word in input_str.split():
        if "-" in word:
            output_str += word[0].upper() + word[1:].replace("-", "") + " "
        else:
            if len(output_str) > 0:
                output_str += output_str[-1].upper()
            output_str += word + " "
    return output_str.strip()