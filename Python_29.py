```
def filter_by_prefix(user_input=None):
    strings = input('Enter a list of strings (separated by commas): ') if user_input is None else user_input
    prefix = input('Enter a prefix to filter: ')
    strings_list = [s.strip() for s in strings.split(',')]
    result = [s for s in strings_list if s.startswith(prefix)]
    print(result)