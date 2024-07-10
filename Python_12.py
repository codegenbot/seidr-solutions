def longest():
    strings = input("Enter a series of words (separated by spaces): ")
    strings_list = [s.strip().lower() for s in strings.split()]
    if not all(isinstance(s, str) for s in strings_list):
        return "Invalid input: Please enter only strings."
    elif not strings_list:
        return None
    else:
        return max(strings_list, key=len)