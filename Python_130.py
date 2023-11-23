def tri(n):
    seq = [3]
    if n == 0:
        return seq
    seq.append(1 + n / 2) if n % 2 == 0 else seq.append(tri(n - 1)[-1] + tri(n - 2)[-1] + tri(n + 1)[-1])
    return seq

# Test cases
print(tri(0))  # [3]
print(tri(1))  # [3, 1]
print(tri(2))  # [3, 1, 2]
print(tri(3))  # [3, 1, 2, 8]
print(tri(4))  # [3, 1, 2, 8, 11]