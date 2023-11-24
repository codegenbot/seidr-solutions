def kebab_to_camel_case(string):
    words = string.split("-")
    camel_case = words[0]
    for word in words[1:]:
        camel_case += word.capitalize()
    return camel_case

input_string = input()
print(kebab_to_camel_case(input_string))