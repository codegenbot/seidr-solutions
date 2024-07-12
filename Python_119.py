def match_parens(lst):
    return "Yes" if sum(a != b for a, b in zip(*lst)) % 2 == 0 else "No"