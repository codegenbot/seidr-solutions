def filter_by_prefix(prefix="", user_input=None):
    if user_input is None:
        strings = input('Enter a list of strings (separated by commas): ')
    else:
        strings = user_input
    strings_list = [s.strip() for s in strings.split(',')]
    result = [s for s in strings_list if not prefix or s.startswith(''.join(map(str, prefix)))]
    print(result)