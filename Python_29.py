def filter_by_prefix(user_input=None): 
    if user_input is None:
        strings = input('Enter a list of strings (separated by commas): ')
    else:
        strings = user_input
    prefix = input('Enter a prefix to filter: ')
    strings_list = [s.strip() for s in strings.split(',')]
    result = [s for s in strings_list if s.startswith(prefix)]
    print(result)