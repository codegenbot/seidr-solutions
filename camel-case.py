def convert_kebab_to_camel(input_str):
    words = input_str.split()
    camel_case = ""
    for word in words:
        if camel_case:
            first_letter_upper = word[0].upper()
            camel_case += first_letter_upper + word[1:].lower()
        else:
            camel_case = word.lower()
    return camel_case