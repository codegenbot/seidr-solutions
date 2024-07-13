def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '1').replace('mango', '2')
    import re
    num_words = [word for word in s.split() if re.match(r'\d', word)]
    return n - len([w for w in num_words if w == '0']) - len([w for w in num_words if w == '1'])