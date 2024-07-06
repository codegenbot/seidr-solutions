def fruit_distribution(s, n):
    matches = re.findall(r"\d+", s)
    num_apples = int(matches[0])
    num_oranges = int(matches[1])
    return n - (num_apples + num_oranges)

def fruit_distribution(s, n):
    apples, oranges = s.split(" and ")
    num_apples = int(apples)
    num_oranges = int(oranges)
    return n - (num_apples + num_oranges)