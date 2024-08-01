```
def kebab_to_camel(kebab):
    words = kebab.split()
    camel_case = ''
    for word in words:
        if camel_case:
            first_letter = word[0].upper()
            camel_case += first_letter + word[1:].lower()
        else:
            camel_case += word
    return camel_case

input_str = input()
print(kebab_to_camel(input_str))