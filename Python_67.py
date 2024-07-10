```
def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples_and_part = [part for part in s if "apples" in part][0]
    apples = int(apples_and_part.replace("apples ", "").replace("and", ""))
    oranges_and_part = [part for part in s if "oranges" in part][0]
    oranges = int(oranges_and_part.replace("oranges ", "").replace("and", ""))
    return n - apples - oranges