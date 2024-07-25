def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    ones = int(s.count("1"))
    zeros = int(s.count("0"))
    total_count = sum(
        int(x)
        for x in "".join(
            [part for part in parts if any(char.isdigit() for char in part)]
        )
    )
    return n - total_count - ones - zeros