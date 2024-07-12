```
def filter_by_prefix(prefix="", user_input=None):
    if user_input is None:
        strings = input('Enter a list of strings (separated by commas): ')
    else:
        strings = user_input
    strings_list = [s.strip() for s in strings.split(',')]
    result = [str(s.strip()).lower() for s in strings_list if s and str(s.strip()).lower().startswith(prefix.lower())]
    print(result)