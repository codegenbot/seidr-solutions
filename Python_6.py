return [
    max([parens.count("(") for parens in group.split()])
    for group in paren_string.split()
]