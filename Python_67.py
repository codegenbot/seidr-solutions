def fruit_distribution(s, n):
    apples = int(re.search(r'\d+', s).group())
    oranges = int(re.search(r'\d+', s).group())
    return (apples + oranges) * n
  
assert fruit_distribution("1 apples and 100 oranges", 19) == 389