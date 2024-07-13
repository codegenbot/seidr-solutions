def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '1').replace('mango', '2')
    fruits = s.split()
    return n - int(fruits[0]) - int(fruits[-1])