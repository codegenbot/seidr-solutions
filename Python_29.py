```
def filter_by_prefix(user_input=None):
    strings_list = [s.strip() for s in user_input.split(',')]
    prefix = input('Enter a prefix to filter: ')
    result = [s for s in strings_list if s.startswith(prefix)]
    print(result)

def check(func):
    strings = input('Enter a list of strings (separated by commas): ')
    func(strings)