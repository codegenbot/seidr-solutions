def int_to_mini_roman(number):
    roman = ''
    valuations = [(1000, 'm'), (900, 'cm'), (500, 'd'), (400, 'cd'),
                  (100, 'c'), (90, 'xc'), (50, 'l'), (40, 'xl'),
                  (10, 'x'), (9, 'ix'), (5, 'v'), (4, 'iv'), (1, 'i')
    for val, syb in valuations:
        while number >= val:
            roman += syb
            number -= val
    return roman.lower()