```Python
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0  # Ensure decimal division
    return bin(int(round(avg)))[2:].zfill(9)  # Fill with leading zeros to get the desired output.