def filter_by_prefix(prefix="", user_input=None):
    if user_input is None:
        strings = input('Enter a list of strings (separated by commas): ')
    else:
        strings = user_input
    strings_list = [s.strip().lower() for s in strings.split(',')]
    result = [s for s in (s.strip().lower() for s in strings_list) if any(s2.startswith(prefix) for s2 in (s.strip() for s in strings_list))]
    print(result)