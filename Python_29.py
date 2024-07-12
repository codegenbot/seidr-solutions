def filter_by_prefix(prefix):
    strings = input('Enter a list of strings (separated by commas): ')
    strings_list = [s.strip() for s in strings.split(',')]
    result = [s for s in strings_list if s.startswith(prefix)]
    print(result)