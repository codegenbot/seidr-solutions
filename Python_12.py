def longest_strings(list_of_strings):
    if not list_of_strings:
        return None
    return max(set([item.lower() for item in list_of_strings]),key=len)