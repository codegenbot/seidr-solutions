Here is the Python code for the problem:

def camel_case(input_str):
    return ' '.join(word.capitalize() for word in input_str.split()) if '-' not in input_str else ' '.join(word[0].upper() + word[1:].lower() for word in input_str.split('-'))