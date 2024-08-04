Here is the completed code:

def kebab_to_camel(kebab_case_str):
    return ' '.join(word.capitalize() for word in kebab_case_str.split())

input_str = input()
print(kebab_to_camel(input_str))