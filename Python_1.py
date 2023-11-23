def separate_paren_groups(paren_string):
    paren_string = paren_string.strip('()')
    groups = paren_string.split(')(')
    groups = ['(' + group + ')' for group in groups]
    return groups