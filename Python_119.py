def match_parens(lst):
    counter = 0
    for s in lst:
        for c in s:
            if c == '(':
                counter += 1
            elif c == ')':
                if counter == 0:
                    return 'No'
                counter -= 1
    return 'Yes' if counter == 0 else 'No'

assert match_parens([")", "("]) == "No"