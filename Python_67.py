def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    words = s.split()
    if len(words) >= 3 and (words[2] == 'apples' or words[2] == 'oranges'):
        return n - int(''.join(filter(str.isdigit, words[2])))
    else:
        return n