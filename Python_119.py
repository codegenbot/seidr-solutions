def match_parens(lst):
    counter = 0
    for s in lst:
        for char in s:
            if char == '(':
                counter += 1
            elif char == ')':
                if counter == 0:
                    return 'No'
                counter -= 1
            if counter < 0:  # Add this condition
                return 'No'
    if counter != 0:
        return 'No'
    return 'Yes'