def average_range_value(a, b):
    if a > b:
        return -1
    avg = sum(range(a, b+1)) / (b-a+1)
    return bin(int(round(avg))).replace("0b", "")