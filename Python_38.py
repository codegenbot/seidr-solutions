def decode_cyclic(s):
    s = s.replace("<<<", "")
    if "," not in s:
        return s
    data, *rest = map(int, s.split(","))
    n = len(data)
    decoded_data = [data[0]]
    for d in data[1:]:
        i = (d + 1) % n
        decoded_data.append(decoded_data[i])
    return ",".join(map(str, decoded_data))