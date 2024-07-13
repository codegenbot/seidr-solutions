Here is the Python code to solve the problem:

def kebab_to_camel(s):
    return ''.join(word.capitalize() for word in s.split('-')) if '-' in s else s

while True:
    user_input = input("Enter a string (or 'stop' to quit): ")
    if user_input.lower() == 'stop':
        break
    print(kebab_to_camel(user_input))