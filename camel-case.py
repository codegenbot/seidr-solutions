```
def convert_to_camel_case(input_str):
    return ''.join(word.capitalize() for word in input_str.split('-')) if '-' in input_str else input_str

while True:
    try:
        user_input = input()
        print(convert_to_camel_case(user_input))
    except KeyboardInterrupt:
        break