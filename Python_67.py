```
def fruit_distribution(s, n):
    words = s.split()
    apples = 0
    oranges = 0
    for i in range(len(words)):
        if words[i].lower() == "apples":
            apples += int("".join(filter(str.isdigit, " ".join(words[:i+1]))))
        elif words[i].lower() == "oranges":
            oranges += int("".join(filter(str.isdigit, " ".join(words[:i+1]))))
    return max(0, n - min(apples, oranges))