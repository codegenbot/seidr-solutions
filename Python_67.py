```
def fruit_distribution(s,n):
    s = s.lower()
    count_o = s.count('o')
    count_a = s.count('a')
    num_fruit = int(''.join(filter(str.isdigit, s)))
    return n - (count_o + count_a + num_fruit)