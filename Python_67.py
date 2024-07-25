def fruit_distribution(s):
    s = s.lower()
    if "and" in s:
        parts = []
        for x in re.split(r"(\d+|\band\))", s):
            if x.isdigit() or x == "and":
                parts.append(x)
    else:
        parts = [x for x in re.split(r"\d+", s)]
    ones = s.count("1")
    zeros = s.count("0")
    total_count = 0
    for i in range(len(parts)):
        if parts[i].isdigit():
            total_count += int(parts[i])
    return max(0, 5 - total_count - ones - zeros)