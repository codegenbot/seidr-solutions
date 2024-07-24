def fruit_distribution(s, n):
    pattern = r"(\d+)\s*(apples|oranges)"
    quantities = [int(x[0]) for x in re.findall(pattern, s.lower())]
    apples, oranges = map(
        sum, zip(*[(x == "apples") for x in (re.findall(pattern, s.lower()))])
    )

    total_fruit = apples + oranges
    max_per_box = min(total_fruit // n, n)
    remaining_fruits = total_fruit - (max_per_box * n)

    if max_per_box > 0:
        return (
            int(-(-total_fruit / float(max_per_box)) + 0.5)
            if total_fruit % max_per_box == 0
            else total_fruit
        )
    else:
        return total_fruit