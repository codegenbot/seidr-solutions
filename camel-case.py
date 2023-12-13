def kebab_to_camel_case(string):
    words = string.split("-")
    camel_case_words = [words[0]] + [word.capitalize() for word in words[1:]]
    return "".join(camel_case_words)

input_string = input()
output_string = kebab_to_camel_case(input_string)
print(output_string)