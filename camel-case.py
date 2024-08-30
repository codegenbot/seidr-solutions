def camel_case(input_str):
    return "".join(word.capitalize() if i == 0 else word[0].upper()+word[1:] for i, word in enumerate(input_str.replace("-", " ").split()))