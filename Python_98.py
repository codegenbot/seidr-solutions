def count_upper(s):
    if not isinstance(s, str): 
        return "Error: Input must be a string"
    return sum(1 for i, c in enumerate(s) if 'A' <= c <= 'E' and i % 2 == 0)