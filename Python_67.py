
def fruit_distribution(s, n):
    apples, oranges = s.split("and")
    num_apples = int(re.search(r'\d+', apples).group())
    num_oranges = int(re.search(r'\d+', oranges).group())
    total_fruits = num_apples + num_oranges
    num_mangoes = n - total_fruits
    return num_mangoes