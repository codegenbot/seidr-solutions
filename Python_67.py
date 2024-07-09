def fruit_distribution(s, n):
    s = s.lower()
    num_apples = 0
    for word in s.split():
        if word.startswith('apple'):
            num_apples += int(next((i for i in iter(s.split()[s.split().index(word)+1:]) if i.isdigit()), '0'))
    return n - num_apples