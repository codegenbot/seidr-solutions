Here is the solution:

def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.split()) if '-' in word or ' ' in word).replace('-', '').replace(' ', '')

input_str = input()
print(camel_case(input_str))