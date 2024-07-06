```
def filter_by_prefix(strings: list[str], prefix: str) -> list[str]:
    '''This function filters a list of strings based on a given prefix and returns 
       all the strings that start with the provided prefix'''
    return [s for s in strings if s.startswith(prefix)]