Here is the Python code for the problem:

def kebab_to_camel(input_string):
    words = input_string.split()
    camel_string = ''
    prev_word = None
    
    for word in words:
        if prev_word and prev_word.endswith('-'):
            camel_string += word[1:].capitalize() + ' '
        else:
            camel_string += word.capitalize() + ' '
    
    return camel_string.strip()

print(kebab_to_camel("camel-case example-test-string"))