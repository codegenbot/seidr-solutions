```
def fruit_distribution(sentence):
    sentence = sentence.lower()
    if "and" in sentence:
        parts = []
        for x in re.split(r"(\d+|\band\))", sentence):
            if x.isdigit() or x == "and":
                parts.append(x)
    else:
        parts = [x for x in re.split(r"\d+", sentence)]
    ones = sentence.count("1")
    zeros = sentence.count("0")
    total_count = 0
    for i in range(len(parts)):
        if parts[i].isdigit():
            total_count += int(parts[i])
    return max(0, 5 - total_count - ones - zeros)