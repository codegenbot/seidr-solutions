```
def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    count = 0
    for i, word in enumerate(s.split()):
        if word.isdigit():
            count += int(word)
        elif word == "apples" or word == "oranges":
            break
    return n - count