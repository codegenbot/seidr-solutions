```
def fruit_distribution(s,n):
    words = s.split()
    count = 0
    for i in range(len(words)):
        if words[i].lower() == "apples" or words[i].lower() == "oranges":
            count += int(words[i-1]) + 1 if i > 0 and not words[i-2].isdigit() else int(words[i-1])
    return n - count